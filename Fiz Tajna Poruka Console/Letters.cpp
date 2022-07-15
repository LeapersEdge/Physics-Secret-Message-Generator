#include "Letters.h"
#include <random>

Letters::Letters(Graphics& gfx)
	:
	gfx(gfx),
	rng(rd()),
	lightRNG(0, lightArrSize - 1),
	darkRNG(0, darkArrSize - 1),
	noiseRNG(0, 1)
{
	light[0] = Color(255, 255, 255);	// white
	light[1] = Color(255, 0, 0);		// red
	light[2] = Color(255, 255, 0);		// yellow
	light[3] = Color(255, 0, 255);		// pink
	light[4] = Color(255, 128, 0);		// orange
	light[5] = Color(255, 0, 128);		// dark pink

	light[6] = Color(255, 102, 102);	// light red
	light[7] = Color(255, 255, 102);	// light yellow
	light[8] = Color(255, 178, 102);	// light orange
	light[9] = Color(255, 102, 255);	// light pink
	light[10] = Color(255, 102, 178);	// light dark pink
										   
	dark[0] = Color(0, 255, 0);			// green
	dark[1] = Color(0, 0, 255);			// blue
	dark[2] = Color(0, 255, 255);		// cyan
	dark[3] = Color(0, 0, 0);			// black
	dark[4] = Color(128, 0, 255);		// purple
	dark[5] = Color(128, 255, 0);		// light green
	dark[6] = Color(0, 128, 255);		// light blue
	dark[7] = Color(128, 128, 128);		// gray
}

// if you want to read this, good luck
// the 1st double loop that goes across entire letter frame is there to rng the light background, then overriding it with dark letters

void Letters::a(int startX, int startY)
{
	for (int x = 0; x < 6; x++)
		for (int y = 0; y < 8; y++)
		{
			int lIndex = lightRNG(rng);
			gfx.PutRect(startX + x * 5, startY + y * 5, light[lIndex]);
		}

	for (int i = 2; i <= 3; i++)
	{
		int dIndex = darkRNG(rng);
		gfx.PutRect(startX + i * 5, startY + 5, dark[dIndex]);
	}
	for (int i = 2; i <= 3; i++)
	{
		int dIndex = darkRNG(rng);
		gfx.PutRect(startX + i * 5, startY + 20, dark[dIndex]);
	}
	for (int i = 2; i <= 6; i++)
	{
		int dIndex = darkRNG(rng);
		gfx.PutRect(startX + 5, startY + i * 5, dark[dIndex]);
	}
	for (int i = 2; i <= 6; i++)
	{
		int dIndex = darkRNG(rng);
		gfx.PutRect(startX + 20, startY + i * 5, dark[dIndex]);
	}
}

void Letters::b(int startX, int startY)
{
	for (int x = 0; x < 6; x++)
		for (int y = 0; y < 8; y++)
		{
			int lIndex = lightRNG(rng);
			gfx.PutRect(startX + x * 5, startY + y * 5, light[lIndex]);
		}

	for (int i = 2; i <= 3; i++)
	{
		int dIndex = darkRNG(rng);
		gfx.PutRect(startX + i * 5, startY + 5, dark[dIndex]);
	}
	for (int i = 2; i <= 3; i++)
	{
		int dIndex = darkRNG(rng);
		gfx.PutRect(startX + i * 5, startY + 15, dark[dIndex]);
	}
	for (int i = 2; i <= 3; i++)
	{
		int dIndex = darkRNG(rng);
		gfx.PutRect(startX + i * 5, startY + 30, dark[dIndex]);
	}
	for (int i = 1; i <= 6; i++)
	{
		int dIndex = darkRNG(rng);
		gfx.PutRect(startX + 5, startY + i * 5, dark[dIndex]);
	}
	for (int i = 4; i <= 5; i++)
	{
		int dIndex = darkRNG(rng);
		gfx.PutRect(startX + 20, startY + i * 5, dark[dIndex]);
	}
	int dIndex = darkRNG(rng);
	gfx.PutRect(startX + 20, startY + 2 * 5, dark[dIndex]);
}

void Letters::c(int startX, int startY)
{
	for (int x = 0; x < 6; x++)
		for (int y = 0; y < 8; y++)
		{
			int lIndex = lightRNG(rng);
			gfx.PutRect(startX + x * 5, startY + y * 5, light[lIndex]);
		}

	for (int i = 2; i <= 3; i++)
	{
		int dIndex = darkRNG(rng);
		gfx.PutRect(startX + i * 5, startY + 5, dark[dIndex]);
	}
	for (int i = 2; i <= 3; i++)
	{
		int dIndex = darkRNG(rng);
		gfx.PutRect(startX + i * 5, startY + 30, dark[dIndex]);
	}
	for (int i = 2; i <= 5; i++)
	{
		int dIndex = darkRNG(rng);
		gfx.PutRect(startX + 5, startY + i * 5, dark[dIndex]);
	}
	int dIndex = darkRNG(rng);
	int dIndex2 = darkRNG(rng);

	gfx.PutRect(startX + 20, startY + 2 * 5, dark[dIndex]);
	gfx.PutRect(startX + 20, startY + 5 * 5, dark[dIndex2]);
}

void Letters::d(int startX, int startY)
{
	for (int x = 0; x < 6; x++)
		for (int y = 0; y < 8; y++)
		{
			int lIndex = lightRNG(rng);
			gfx.PutRect(startX + x * 5, startY + y * 5, light[lIndex]);
		}

	for (int i = 2; i <= 3; i++)
	{
		int dIndex = darkRNG(rng);
		gfx.PutRect(startX + i * 5, startY + 5, dark[dIndex]);
	}
	for (int i = 2; i <= 3; i++)
	{
		int dIndex = darkRNG(rng);
		gfx.PutRect(startX + i * 5, startY + 30, dark[dIndex]);
	}
	for (int i = 1; i <= 6; i++)
	{
		int dIndex = darkRNG(rng);
		gfx.PutRect(startX + 5, startY + i * 5, dark[dIndex]);
	}
	for (int i = 2; i <= 5; i++)
	{
		int dIndex = darkRNG(rng);
		gfx.PutRect(startX + 20, startY + i * 5, dark[dIndex]);
	}
}

void Letters::e(int startX, int startY)
{
	for (int x = 0; x < 6; x++)
		for (int y = 0; y < 8; y++)
		{
			int lIndex = lightRNG(rng);
			gfx.PutRect(startX + x * 5, startY + y * 5, light[lIndex]);
		}

	for (int i = 1; i <= 6; i++)
	{
		int dIndex = darkRNG(rng);
		gfx.PutRect(startX + 5, startY + i * 5, dark[dIndex]);
	}
	for (int i = 2; i <= 4; i++)
	{
		int dIndex = darkRNG(rng);
		gfx.PutRect(startX + i * 5, startY + 5, dark[dIndex]);
	}
	for (int i = 2; i <= 4; i++)
	{
		int dIndex = darkRNG(rng);
		gfx.PutRect(startX + i * 5, startY + 15, dark[dIndex]);
	}
	for (int i = 2; i <= 4; i++)
	{
		int dIndex = darkRNG(rng);
		gfx.PutRect(startX + i * 5, startY + 30, dark[dIndex]);
	}
}

void Letters::f(int startX, int startY)
{
	for (int x = 0; x < 6; x++)
		for (int y = 0; y < 8; y++)
		{
			int lIndex = lightRNG(rng);
			gfx.PutRect(startX + x * 5, startY + y * 5, light[lIndex]);
		}

	for (int i = 1; i <= 6; i++)
	{
		int dIndex = darkRNG(rng);
		gfx.PutRect(startX + 5, startY + i * 5, dark[dIndex]);
	}
	for (int i = 2; i <= 4; i++)
	{
		int dIndex = darkRNG(rng);
		gfx.PutRect(startX + i * 5, startY + 5, dark[dIndex]);
	}
	for (int i = 2; i <= 4; i++)
	{
		int dIndex = darkRNG(rng);
		gfx.PutRect(startX + i * 5, startY + 15, dark[dIndex]);
	}
}

void Letters::g(int startX, int startY)
{
	for (int x = 0; x < 6; x++)
		for (int y = 0; y < 8; y++)
		{
			int lIndex = lightRNG(rng);
			gfx.PutRect(startX + x * 5, startY + y * 5, light[lIndex]);
		}

	for (int i = 2; i <= 5; i++)
	{
		int dIndex = darkRNG(rng);
		gfx.PutRect(startX + 5, startY + i * 5, dark[dIndex]);
	}
	for (int i = 2; i <= 3; i++)
	{
		int dIndex = darkRNG(rng);
		gfx.PutRect(startX + i * 5, startY + 5, dark[dIndex]);
	}
	for (int i = 2; i <= 3; i++)
	{
		int dIndex = darkRNG(rng);
		gfx.PutRect(startX + i * 5, startY + 30, dark[dIndex]);
	}
	for (int i = 4; i <= 5; i++)
	{
		int dIndex = darkRNG(rng);
		gfx.PutRect(startX + 20, startY + i * 5, dark[dIndex]);
	}
	int dIndex = darkRNG(rng);
	int dIndex2 = darkRNG(rng);

	gfx.PutRect(startX + 20, startY + 2 * 5, dark[dIndex]);
	gfx.PutRect(startX + 15, startY + 4 * 5, dark[dIndex2]);
}

void Letters::h(int startX, int startY)
{
	for (int x = 0; x < 6; x++)
		for (int y = 0; y < 8; y++)
		{
			int lIndex = lightRNG(rng);
			gfx.PutRect(startX + x * 5, startY + y * 5, light[lIndex]);
		}

	for (int i = 1; i <= 6; i++)
	{
		int dIndex = darkRNG(rng);
		gfx.PutRect(startX + 5, startY + i * 5, dark[dIndex]);
	}
	for (int i = 1; i <= 6; i++)
	{
		int dIndex = darkRNG(rng);
		gfx.PutRect(startX + 20, startY + i * 5, dark[dIndex]);
	}
	for (int i = 2; i <= 3; i++)
	{
		int dIndex = darkRNG(rng);
		gfx.PutRect(startX + i * 5, startY + 15, dark[dIndex]);
	}
}

void Letters::i(int startX, int startY)
{
	for (int x = 0; x < 6; x++)
		for (int y = 0; y < 8; y++)
		{
			int lIndex = lightRNG(rng);
			gfx.PutRect(startX + x * 5, startY + y * 5, light[lIndex]);
		}

	for (int i = 1; i <= 6; i++)
	{
		int dIndex = darkRNG(rng);
		gfx.PutRect(startX + 10, startY + i * 5, dark[dIndex]);
	}
}

void Letters::j(int startX, int startY)
{
	for (int x = 0; x < 6; x++)
		for (int y = 0; y < 8; y++)
		{
			int lIndex = lightRNG(rng);
			gfx.PutRect(startX + x * 5, startY + y * 5, light[lIndex]);
		}

	for (int i = 1; i <= 5; i++)
	{
		int dIndex = darkRNG(rng);
		gfx.PutRect(startX + 20, startY + i * 5, dark[dIndex]);
	}
	for (int i = 2; i <= 3; i++)
	{
		int dIndex = darkRNG(rng);
		gfx.PutRect(startX + i * 5, startY + 30, dark[dIndex]);
	}
	int dIndex = darkRNG(rng);
	gfx.PutRect(startX + 5, startY + 5 * 5, dark[dIndex]);
}

void Letters::k(int startX, int startY)
{
	for (int x = 0; x < 6; x++)
		for (int y = 0; y < 8; y++)
		{
			int lIndex = lightRNG(rng);
			gfx.PutRect(startX + x * 5, startY + y * 5, light[lIndex]);
		}

	for (int i = 1; i <= 6; i++)
	{
		int dIndex = darkRNG(rng);
		gfx.PutRect(startX + 5, startY + i * 5, dark[dIndex]);
	}
	int dIndex = darkRNG(rng);
	int dIndex2 = darkRNG(rng);
	int dIndex3 = darkRNG(rng);
	int dIndex4 = darkRNG(rng);
	int dIndex5 = darkRNG(rng);
	int dIndex6 = darkRNG(rng);

	gfx.PutRect(startX + 10, startY + 5 * 4, dark[dIndex]);
	gfx.PutRect(startX + 15, startY + 5 * 3, dark[dIndex2]);
	gfx.PutRect(startX + 15, startY + 5 * 5, dark[dIndex3]);
	gfx.PutRect(startX + 20, startY + 5 * 6, dark[dIndex4]);
	gfx.PutRect(startX + 20, startY + 5 * 1, dark[dIndex5]);
	gfx.PutRect(startX + 20, startY + 5 * 2, dark[dIndex6]);
}

void Letters::l(int startX, int startY)
{
	for (int x = 0; x < 6; x++)
		for (int y = 0; y < 8; y++)
		{
			int lIndex = lightRNG(rng);
			gfx.PutRect(startX + x * 5, startY + y * 5, light[lIndex]);
		}

	for (int i = 1; i <= 6; i++)
	{
		int dIndex = darkRNG(rng);
		gfx.PutRect(startX + 5, startY + i * 5, dark[dIndex]);
	}
	for (int i = 1; i <= 4; i++)
	{
		int dIndex = darkRNG(rng);
		gfx.PutRect(startX + 5 * i, startY + 6 * 5, dark[dIndex]);
	}
}

void Letters::m(int startX, int startY)
{
	for (int x = 0; x < 6; x++)
		for (int y = 0; y < 8; y++)
		{
			int lIndex = lightRNG(rng);
			gfx.PutRect(startX + x * 5, startY + y * 5, light[lIndex]);
		}

	for (int i = 1; i <= 6; i++)
	{
		int dIndex = darkRNG(rng);
		gfx.PutRect(startX + 5, startY + i * 5, dark[dIndex]);
	}
	for (int i = 1; i <= 6; i++)
	{
		int dIndex = darkRNG(rng);
		gfx.PutRect(startX + 25, startY + i * 5, dark[dIndex]);
	}
	int dIndex = darkRNG(rng);
	int dIndex2 = darkRNG(rng);
	int dIndex3 = darkRNG(rng);

	gfx.PutRect(startX + 10, startY + 5 * 2, dark[dIndex]);
	gfx.PutRect(startX + 15, startY + 5 * 3, dark[dIndex2]);
	gfx.PutRect(startX + 20, startY + 5 * 2, dark[dIndex3]);
}

void Letters::n(int startX, int startY)
{
	for (int x = 0; x < 6; x++)
		for (int y = 0; y < 8; y++)
		{
			int lIndex = lightRNG(rng);
			gfx.PutRect(startX + x * 5, startY + y * 5, light[lIndex]);
		}

	for (int i = 1; i <= 6; i++)
	{
		int dIndex = darkRNG(rng);
		gfx.PutRect(startX + 5, startY + i * 5, dark[dIndex]);
	}
	for (int i = 1; i <= 6; i++)
	{
		int dIndex = darkRNG(rng);
		gfx.PutRect(startX + 25, startY + i * 5, dark[dIndex]);
	}
	int dIndex = darkRNG(rng);
	int dIndex2 = darkRNG(rng);
	int dIndex3 = darkRNG(rng);
	int dIndex4 = darkRNG(rng);

	gfx.PutRect(startX + 10, startY + 5 * 2, dark[dIndex]);
	gfx.PutRect(startX + 15, startY + 5 * 3, dark[dIndex2]);
	gfx.PutRect(startX + 15, startY + 5 * 4, dark[dIndex3]);
	gfx.PutRect(startX + 20, startY + 5 * 5, dark[dIndex4]);
}

void Letters::o(int startX, int startY)
{
	for (int x = 0; x < 6; x++)
		for (int y = 0; y < 8; y++)
		{
			int lIndex = lightRNG(rng);
			gfx.PutRect(startX + x * 5, startY + y * 5, light[lIndex]);
		}

	for (int i = 2; i <= 5; i++)
	{
		int dIndex = darkRNG(rng);
		gfx.PutRect(startX + 5, startY + i * 5, dark[dIndex]);
	}
	for (int i = 2; i <= 5; i++)
	{
		int dIndex = darkRNG(rng);
		gfx.PutRect(startX + 20, startY + i * 5, dark[dIndex]);
	}
	int dIndex = darkRNG(rng);
	int dIndex2 = darkRNG(rng);
	int dIndex3 = darkRNG(rng);
	int dIndex4 = darkRNG(rng);

	gfx.PutRect(startX + 10, startY + 5 * 1, dark[dIndex]);
	gfx.PutRect(startX + 15, startY + 5 * 1, dark[dIndex2]);
	gfx.PutRect(startX + 10, startY + 5 * 6, dark[dIndex3]);
	gfx.PutRect(startX + 15, startY + 5 * 6, dark[dIndex4]);
}

void Letters::p(int startX, int startY)
{
	for (int x = 0; x < 6; x++)
		for (int y = 0; y < 8; y++)
		{
			int lIndex = lightRNG(rng);
			gfx.PutRect(startX + x * 5, startY + y * 5, light[lIndex]);
		}

	for (int i = 1; i <= 6; i++)
	{
		int dIndex = darkRNG(rng);
		gfx.PutRect(startX + 5, startY + i * 5, dark[dIndex]);
	}
	for (int i = 2; i <= 3; i++)
	{
		int dIndex = darkRNG(rng);
		gfx.PutRect(startX + 20, startY + i * 5, dark[dIndex]);
	}
	for (int i = 2; i <= 3; i++)
	{
		int dIndex = darkRNG(rng);
		gfx.PutRect(startX + 5 * i, startY + 5, dark[dIndex]);
	}
	for (int i = 2; i <= 3; i++)
	{
		int dIndex = darkRNG(rng);
		gfx.PutRect(startX + 5 * i, startY + 4 * 5, dark[dIndex]);
	}
}

void Letters::r(int startX, int startY)
{
	for (int x = 0; x < 6; x++)
		for (int y = 0; y < 8; y++)
		{
			int lIndex = lightRNG(rng);
			gfx.PutRect(startX + x * 5, startY + y * 5, light[lIndex]);
		}

	for (int i = 1; i <= 6; i++)
	{
		int dIndex = darkRNG(rng);
		gfx.PutRect(startX + 5, startY + i * 5, dark[dIndex]);
	}
	for (int i = 2; i <= 3; i++)
	{
		int dIndex = darkRNG(rng);
		gfx.PutRect(startX + 20, startY + i * 5, dark[dIndex]);
	}
	for (int i = 2; i <= 3; i++)
	{
		int dIndex = darkRNG(rng);
		gfx.PutRect(startX + 5 * i, startY + 5, dark[dIndex]);
	}
	for (int i = 2; i <= 3; i++)
	{
		int dIndex = darkRNG(rng);
		gfx.PutRect(startX + 5 * i, startY + 4 * 5, dark[dIndex]);
	}
	int dIndex = darkRNG(rng);
	int dIndex2 = darkRNG(rng);

	gfx.PutRect(startX + 15, startY + 5 * 5, dark[dIndex]);
	gfx.PutRect(startX + 20, startY + 5 * 6, dark[dIndex2]);
}

void Letters::s(int startX, int startY)
{
	for (int x = 0; x < 6; x++)
		for (int y = 0; y < 8; y++)
		{
			int lIndex = lightRNG(rng);
			gfx.PutRect(startX + x * 5, startY + y * 5, light[lIndex]);
		}

	// well, yeah, sometimes, there isnt a shortcut

	int dIndex = darkRNG(rng);
	int dIndex2 = darkRNG(rng);
	int dIndex3 = darkRNG(rng);
	int dIndex4 = darkRNG(rng);
	int dIndex5 = darkRNG(rng);
	int dIndex6 = darkRNG(rng);
	int dIndex7 = darkRNG(rng);
	int dIndex8 = darkRNG(rng);
	int dIndex9 = darkRNG(rng);
	int dIndex10 = darkRNG(rng);

	gfx.PutRect(startX + 10, startY + 5 * 1, dark[dIndex]);
	gfx.PutRect(startX + 15, startY + 5 * 1, dark[dIndex2]);
	gfx.PutRect(startX + 5, startY + 5 * 2, dark[dIndex3]);
	gfx.PutRect(startX + 20, startY + 5 * 2, dark[dIndex4]);
	gfx.PutRect(startX + 10, startY + 5 * 3, dark[dIndex5]);
	gfx.PutRect(startX + 15, startY + 5 * 4, dark[dIndex6]);
	gfx.PutRect(startX + 20, startY + 5 * 5, dark[dIndex7]);
	gfx.PutRect(startX + 5, startY + 5 * 5, dark[dIndex8]);
	gfx.PutRect(startX + 10, startY + 5 * 6, dark[dIndex9]);
	gfx.PutRect(startX + 15, startY + 5 * 6, dark[dIndex10]);
}

void Letters::t(int startX, int startY)
{
	for (int x = 0; x < 6; x++)
		for (int y = 0; y < 8; y++)
		{
			int lIndex = lightRNG(rng);
			gfx.PutRect(startX + x * 5, startY + y * 5, light[lIndex]);
		}

	for (int i = 2; i <= 6; i++)
	{
		int dIndex = darkRNG(rng);
		gfx.PutRect(startX + 15, startY + i * 5, dark[dIndex]);
	}
	for (int i = 1; i <= 5; i++)
	{
		int dIndex = darkRNG(rng);
		gfx.PutRect(startX + 5 * i, startY + 5, dark[dIndex]);
	}
}

void Letters::u(int startX, int startY)
{
	for (int x = 0; x < 6; x++)
		for (int y = 0; y < 8; y++)
		{
			int lIndex = lightRNG(rng);
			gfx.PutRect(startX + x * 5, startY + y * 5, light[lIndex]);
		}

	for (int i = 1; i <= 5; i++)
	{
		int dIndex = darkRNG(rng);
		gfx.PutRect(startX + 5, startY + i * 5, dark[dIndex]);
	}
	for (int i = 1; i <= 5; i++)
	{
		int dIndex = darkRNG(rng);
		gfx.PutRect(startX + 20, startY + i * 5, dark[dIndex]);
	}
	for (int i = 2; i <= 3; i++)
	{
		int dIndex = darkRNG(rng);
		gfx.PutRect(startX + 5 * i, startY + 30, dark[dIndex]);
	}
}

void Letters::v(int startX, int startY)
{
	for (int x = 0; x < 6; x++)
		for (int y = 0; y < 8; y++)
		{
			int lIndex = lightRNG(rng);
			gfx.PutRect(startX + x * 5, startY + y * 5, light[lIndex]);
		}

	for (int i = 1; i <= 3; i++)
	{
		int dIndex = darkRNG(rng);
		gfx.PutRect(startX + 5, startY + i * 5, dark[dIndex]);
	}
	for (int i = 1; i <= 3; i++)
	{
		int dIndex = darkRNG(rng);
		gfx.PutRect(startX + 25, startY + i * 5, dark[dIndex]);
	}
	for (int i = 4; i <= 5; i++)
	{
		int dIndex = darkRNG(rng);
		gfx.PutRect(startX + 10, startY + i * 5, dark[dIndex]);
	}
	for (int i = 4; i <= 5; i++)
	{
		int dIndex = darkRNG(rng);
		gfx.PutRect(startX + 20, startY + i * 5, dark[dIndex]);
	}
	int dIndex = darkRNG(rng);
	gfx.PutRect(startX + 15, startY + 30, dark[dIndex]);
}

void Letters::z(int startX, int startY)
{
	for (int x = 0; x < 6; x++)
		for (int y = 0; y < 8; y++)
		{
			int lIndex = lightRNG(rng);
			gfx.PutRect(startX + x * 5, startY + y * 5, light[lIndex]);
		}

	for (int i = 1; i <= 4; i++)
	{
		int dIndex = darkRNG(rng);
		gfx.PutRect(startX + 5 * i, startY + 5, dark[dIndex]);
	}
	for (int i = 1; i <= 4; i++)
	{
		int dIndex = darkRNG(rng);
		gfx.PutRect(startX + 5 * i, startY + 30, dark[dIndex]);
	}

	int dIndex = darkRNG(rng);
	int dIndex2 = darkRNG(rng);
	int dIndex3 = darkRNG(rng);
	int dIndex4 = darkRNG(rng);

	gfx.PutRect(startX + 20, startY + 5 * 2, dark[dIndex]);
	gfx.PutRect(startX + 15, startY + 5 * 3, dark[dIndex2]);
	gfx.PutRect(startX + 10, startY + 5 * 4, dark[dIndex3]);
	gfx.PutRect(startX + 5, startY + 5 * 5, dark[dIndex4]);
}

// combination of light and dark because noise
void Letters::space(int startX, int startY)
{
	for (int x = 0; x < 6; x++)
		for (int y = 0; y < 8; y++)
		{
			int dIndex = darkRNG(rng);
			int lIndex = lightRNG(rng);

			if (noiseRNG(rng) == 1)
				gfx.PutRect(startX + x * 5, startY + y * 5, dark[dIndex]);
			else
				gfx.PutRect(startX + x * 5, startY + y * 5, light[lIndex]);
		}


}
