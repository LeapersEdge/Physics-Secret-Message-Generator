#pragma once
#include "Graphics.h"
#include "Colors.h"
#include <random>

class Letters
{
public:
	Letters(Graphics& gfx);
public:
	// me when making this: https://cdn.discordapp.com/attachments/432332991306399744/997092702745264189/trim.03135370-7B8D-4900-88F7-93DD4210BE2D.mov
	void a(int startX, int startY);
	void b(int startX, int startY);
	void c(int startX, int startY);
	void d(int startX, int startY);
	void e(int startX, int startY);
	void f(int startX, int startY);
	void g(int startX, int startY);
	void h(int startX, int startY);
	void i(int startX, int startY);
	void j(int startX, int startY);
	void k(int startX, int startY);
	void l(int startX, int startY);
	void m(int startX, int startY);
	void n(int startX, int startY);
	void o(int startX, int startY);
	void p(int startX, int startY);
	void r(int startX, int startY);
	void s(int startX, int startY);
	void t(int startX, int startY);
	void u(int startX, int startY);
	void v(int startX, int startY);
	void z(int startX, int startY);
	void space(int startX, int startY);
private:
	Graphics& gfx;
	
	std::random_device rd;
	std::mt19937 rng;
	std::uniform_int_distribution<int> lightRNG;
	std::uniform_int_distribution<int> darkRNG;
	std::uniform_int_distribution<int> noiseRNG;

	static constexpr int lightArrSize = 11;
	static constexpr int darkArrSize = 8;

	Color light[lightArrSize];
	Color dark[darkArrSize];
};