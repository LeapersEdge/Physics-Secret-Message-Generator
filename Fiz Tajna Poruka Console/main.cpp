// Fiz Tajna Poruka Console.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Graphics.h"
#include "Letters.h"
#include <fstream>
#include <Windows.h>
#include <algorithm>
#include <string>

const int BYTES_PER_PIXEL = 3; /// red, green, & blue
const int FILE_HEADER_SIZE = 14;
const int INFO_HEADER_SIZE = 40;

void printLetter(char c, int yArr, int xArr, Letters& l)
{
    yArr *= 30;
    xArr *= 40;
    if (c == 'a') l.a(yArr, xArr);
    else if (c == 'b') l.b(yArr, xArr);
    else if (c == 'c') l.c(yArr, xArr);
    else if (c == 'd') l.d(yArr, xArr);
    else if (c == 'e') l.e(yArr, xArr);
    else if (c == 'f') l.f(yArr, xArr);
    else if (c == 'g') l.g(yArr, xArr);
    else if (c == 'h') l.h(yArr, xArr);
    else if (c == 'i') l.i(yArr, xArr);
    else if (c == 'j') l.j(yArr, xArr);
    else if (c == 'k') l.k(yArr, xArr);
    else if (c == 'l') l.l(yArr, xArr);
    else if (c == 'm') l.m(yArr, xArr);
    else if (c == 'n') l.n(yArr, xArr);
    else if (c == 'o') l.o(yArr, xArr);
    else if (c == 'p') l.p(yArr, xArr);
    else if (c == 'r') l.r(yArr, xArr);
    else if (c == 's') l.s(yArr, xArr);
    else if (c == 't') l.t(yArr, xArr);
    else if (c == 'u') l.u(yArr, xArr);
    else if (c == 'v') l.v(yArr, xArr);
    else if (c == 'z') l.z(yArr, xArr);
    else l.space(yArr, xArr);
}

int main()
{
    std::cout << "Hello World!\n";
    Graphics picture;
    Letters l(picture);
    char letters[15][25];

#pragma region Initialization
    for (int y = 0; y < 15; y++)
        for (int x = 0; x < 25; x++)
            letters[y][x] = ' ';

    std::cout << "Tell me the sentence, I'll tell you bytes in .bmp language.\n";
    std::cout << "Your sentence please: ";

    std::string input;
    std::getline(std::cin, input);

    for (int y = 0; y < 15; y++)
        for (int x = 0; x < 25; x++)
            if (x + y * Graphics::ScreenWidth < input.length())
                letters[y][x] = input[x + y * Graphics::ScreenWidth];
#pragma endregion

    // "prints" letters onto internal "bitmap" so its ready to be exported 
    for (int y = 0; y < 15; y++)
        for (int x = 0; x < 25; x++)
            printLetter(letters[y][x], x, y, l);

    picture.GenerateBitmapImage("bitmap.bmp");

    std::cout << "Done!\n";
    system("PAUSE");
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
