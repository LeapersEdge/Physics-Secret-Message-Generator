#pragma once
#include "Colors.h"

class Graphics {
public:
	Graphics();
	~Graphics();
private:
	unsigned char* CreateBitmapFileHeader(int height, int stride);
	unsigned char* CreateBitmapInfoHeader(int height, int width);
public:
	void PutPixel(int x, int y, int r, int g, int b)
	{
		PutPixel(x, y, { unsigned char(r),unsigned char(g),unsigned char(b) });
	}
	void PutRect(int x, int y, int r, int g, int b)
	{
		PutRect(x, y, { unsigned char(r), unsigned char(g), unsigned char(b) });
	}
	void PutPixel(int x, int y, Color c);
	void PutRect(int x, int y, Color c);

	void GenerateBitmapImage(const char* imageFileName);
	//void MakeFile();
public:
	static constexpr int ScreenWidth = 800;
	static constexpr int ScreenHeight = 600;

	const int BYTES_PER_PIXEL = 3;		// r, g & b
	const int FILE_HEADER_SIZE = 14;
	const int INFO_HEADER_SIZE = 40;
private:
	Color* pixels = nullptr;
};