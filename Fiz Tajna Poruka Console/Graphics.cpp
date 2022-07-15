#include "Graphics.h"
#include "Colors.h"
#include <assert.h>
#include <fstream>


Graphics::Graphics()
{
	pixels = reinterpret_cast<Color*>(
		_aligned_malloc(sizeof(Color) * Graphics::ScreenWidth * Graphics::ScreenHeight, 16u));
}

Graphics::~Graphics()
{
	if (pixels)
	{
		_aligned_free(pixels);
		pixels = nullptr;
	}
}

void Graphics::GenerateBitmapImage(const char* imageFileName)
{
	int widthInBytes = ScreenWidth * BYTES_PER_PIXEL;
	int paddingSize = (4 - (widthInBytes) % 4) % 4;
	int stride = widthInBytes + paddingSize;

	char* bitMapFileHeader = (char*)CreateBitmapFileHeader(ScreenHeight, stride);
	char* bitMapInfoHeader = (char*)CreateBitmapInfoHeader(ScreenHeight, ScreenWidth);

	std::ofstream out(imageFileName, std::ios::binary);

	out.write(bitMapFileHeader, FILE_HEADER_SIZE);
	out.write(bitMapInfoHeader, INFO_HEADER_SIZE);

	for (int y = ScreenHeight - 1; y >= 0; y--)
	{
		for (int x = 0; x < ScreenWidth; x++)
		{
			out.put(pixels[y * ScreenWidth + x].GetB());
			out.put(pixels[y * ScreenWidth + x].GetG());
			out.put(pixels[y * ScreenWidth + x].GetR());
		}
	}
}

unsigned char* Graphics::CreateBitmapFileHeader(int height, int stride)
{
	int fileSize = FILE_HEADER_SIZE + INFO_HEADER_SIZE + (stride * height);

	static unsigned char fileHeader[] = {
		0,0,		// signature
		0,0,0,0,	// image file size in bytes
		0,0,0,0,	// reserved
		0,0,0,0,	// start of pixel array
	};

	fileHeader[0] = (unsigned char)('B');									// signature
	fileHeader[1] = (unsigned char)('M');									// signature
	fileHeader[2] = (unsigned char)(fileSize);								// image file size in bytes
	fileHeader[3] = (unsigned char)(fileSize >> 8);							// image file size in bytes
	fileHeader[4] = (unsigned char)(fileSize >> 16);						// image file size in bytes
	fileHeader[5] = (unsigned char)(fileSize >> 24);						// image file size in bytes
	fileHeader[10] = (unsigned char)(FILE_HEADER_SIZE + INFO_HEADER_SIZE);	// start of pixel array

	return fileHeader;
}

unsigned char* Graphics::CreateBitmapInfoHeader(int height, int width)
{
	static unsigned char infoHeader[] = {
		0,0,0,0,	// header size
		0,0,0,0,	// image width
		0,0,0,0,	// image height
		0,0,		// number of color planes
		0,0,		// bits per pixel
		0,0,0,0,	// compression
		0,0,0,0,	// image size
		0,0,0,0,	// horizontal resolution
		0,0,0,0,	// vertical resolution
		0,0,0,0,	// colors in color table
		0,0,0,0,	// important color count
	};

	infoHeader[0] = (unsigned char)(INFO_HEADER_SIZE);		// header size
	infoHeader[4] = (unsigned char)(width);					// image width
	infoHeader[5] = (unsigned char)(width >> 8);			// image height
	infoHeader[6] = (unsigned char)(width >> 16);			// number of color plane
	infoHeader[7] = (unsigned char)(width >> 24);			// bits per pixel
	infoHeader[8] = (unsigned char)(height);				// compression
	infoHeader[9] = (unsigned char)(height >> 8);			// image size
	infoHeader[10] = (unsigned char)(height >> 16);			// horizontal resolution
	infoHeader[11] = (unsigned char)(height >> 24);			// vertical resolution
	infoHeader[12] = (unsigned char)(1);					// colors in color table
	infoHeader[14] = (unsigned char)(BYTES_PER_PIXEL * 8);	// important color count

	return infoHeader;
}

void Graphics::PutPixel(int x, int y, Color c)
{
	pixels[Graphics::ScreenWidth * y + x] = c;
}

void Graphics::PutRect(int _x, int _y, Color c)
{
	for (int x = _x; x < (_x + 5); x++)
		for (int y = _y; y < (_y + 5); y++)
			PutPixel(x, y, c);
}
