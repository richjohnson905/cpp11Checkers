//============================================================================
// Name        : CheckersApp.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <Checkers/Board.h>
#include <Checkers/CheckerTypes.h>
#include <Checkers/GameEngine.h>
#include <fstream>

using namespace std;

void print(Board& b);
/*
 *   28  29  30  31
 * 24  25  26  27
 *   20  21  22  23
 * 16  17  18  19
 *   12  13  14  15
 * 8   9   10  11
 *   4   5   6   7
 * 0   1   2   3
 */

int main()
{
	Board b;
	GameEngine engine(b);

	print(b);
	int piece = 0;
	int dir = -1;
	while (piece != 666)
	{
		cout << "Your Move" << endl;
		cin >> piece;
		cout << "Direction" << endl;
		cin >> dir;
		if (dir == 0)
		{
			b.move(piece, Checkers::NW);
		}
		else if (dir == 1)
		{
			b.move(piece, Checkers::NE);
		}
		else if (dir == 2)
		{
			b.move(piece, Checkers::SW);
		}
		else if (dir == 3)
		{
			b.move(piece, Checkers::SE);
		}
		print(b);
		engine.move();
		cout << "Computer moved" << endl;
		print(b);
	}

	cout << "!!!Goodbye Checkers!!!" << endl;
	return 0;
}

void print(Board& b)
{
	ofstream myfile;
	myfile.open ("game.txt", ios::out | ios::trunc);
	b.print(myfile);

	myfile.close();

}
