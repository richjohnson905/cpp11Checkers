/*
 * Board.cpp
 *
 *  Created on: Feb 24, 2013
 *      Author: richardjohnson
 */

#include "Board.h"

using namespace std;

	/*
	 *
	 *   28  29  30  31
	 * 24  25  26  27
	 *   20  21  22  23
	 * 16  17  18  19
	 *   12  13  14  15
	 * 8   9   10  11
	 *   4   5   6   7
	 * 0   1   2   3
	 */
Board::Board()
{
	for (int i = 0; i < 32; ++i)
	{
		m_board.push_back(new Square(i));
	}
	m_red.push_back(new Checker(m_board.at(0), Checkers::RED));
	m_red.push_back(new Checker(m_board.at(1), Checkers::RED));
	m_red.push_back(new Checker(m_board.at(2), Checkers::RED));
	m_red.push_back(new Checker(m_board.at(3), Checkers::RED));
	m_red.push_back(new Checker(m_board.at(4), Checkers::RED));
	m_red.push_back(new Checker(m_board.at(5), Checkers::RED));
	m_red.push_back(new Checker(m_board.at(6), Checkers::RED));
	m_red.push_back(new Checker(m_board.at(7), Checkers::RED));
	m_red.push_back(new Checker(m_board.at(8), Checkers::RED));
	m_red.push_back(new Checker(m_board.at(9), Checkers::RED));
	m_red.push_back(new Checker(m_board.at(10), Checkers::RED));
	m_red.push_back(new Checker(m_board.at(11), Checkers::RED));
	m_black.push_back(new Checker(m_board.at(20), Checkers::BLACK));
	m_black.push_back(new Checker(m_board.at(21), Checkers::BLACK));
	m_black.push_back(new Checker(m_board.at(22), Checkers::BLACK));
	m_black.push_back(new Checker(m_board.at(23), Checkers::BLACK));
	m_black.push_back(new Checker(m_board.at(24), Checkers::BLACK));
	m_black.push_back(new Checker(m_board.at(25), Checkers::BLACK));
	m_black.push_back(new Checker(m_board.at(26), Checkers::BLACK));
	m_black.push_back(new Checker(m_board.at(27), Checkers::BLACK));
	m_black.push_back(new Checker(m_board.at(28), Checkers::BLACK));
	m_black.push_back(new Checker(m_board.at(29), Checkers::BLACK));
	m_black.push_back(new Checker(m_board.at(30), Checkers::BLACK));
	m_black.push_back(new Checker(m_board.at(31), Checkers::BLACK));

	int x = 0;
	m_board.at(x)->setSW(nullptr);m_board.at(x)->setSE(nullptr);           m_board.at(x)->setNW(nullptr);           m_board.at(x)->setNE(m_board.at(x+4));
	x = 1;
	m_board.at(x)->setSW(nullptr);           m_board.at(x)->setSE(nullptr);           m_board.at(x)->setNW(m_board.at(x+3));m_board.at(x)->setNE(m_board.at(x+4));
	x = 2;
	m_board.at(x)->setSW(nullptr);           m_board.at(x)->setSE(nullptr);           m_board.at(x)->setNW(m_board.at(x+3));m_board.at(x)->setNE(m_board.at(x+4));
	x = 3;
	m_board.at(x)->setSW(nullptr);           m_board.at(x)->setSE(nullptr);           m_board.at(x)->setNW(m_board.at(x+3));m_board.at(x)->setNE(m_board.at(x+4));
	x = 4;
	m_board.at(x)->setSW(m_board.at(x-4));m_board.at(x)->setSE(m_board.at(x-3));m_board.at(x)->setNW(m_board.at(x+4));m_board.at(x)->setNE(m_board.at(x+5));
	x = 5;
	m_board.at(x)->setSW(m_board.at(x-4));m_board.at(x)->setSE(m_board.at(x-3));m_board.at(x)->setNW(m_board.at(x+4));m_board.at(x)->setNE(m_board.at(x+5));
	x = 6;
	m_board.at(x)->setSW(m_board.at(x-4));m_board.at(x)->setSE(m_board.at(x-3));m_board.at(x)->setNW(m_board.at(x+4));m_board.at(x)->setNE(m_board.at(x+5));
	x = 7;
	m_board.at(x)->setSW(m_board.at(x-4));m_board.at(x)->setSE(nullptr);           m_board.at(x)->setNW(m_board.at(x+4));m_board.at(x)->setNE(nullptr);
	x = 8;
	m_board.at(x)->setSW(nullptr);           m_board.at(x)->setSE(m_board.at(x-4));m_board.at(x)->setNW(nullptr);           m_board.at(x)->setNE(m_board.at(x+4));
	x = 9;
	m_board.at(x)->setSW(m_board.at(x-5));m_board.at(x)->setSE(m_board.at(x-4));m_board.at(x)->setNW(m_board.at(x+3));m_board.at(x)->setNE(m_board.at(x+4));
	x = 10;
	m_board.at(x)->setSW(m_board.at(x-5));m_board.at(x)->setSE(m_board.at(x-4));m_board.at(x)->setNW(m_board.at(x+3));m_board.at(x)->setNE(m_board.at(x+4));
	x = 11;
	m_board.at(x)->setSW(m_board.at(x-5));m_board.at(x)->setSE(m_board.at(x-4));m_board.at(x)->setNW(m_board.at(x+3));m_board.at(x)->setNE(m_board.at(x+4));
	x = 12;
	m_board.at(x)->setSW(m_board.at(x-4));m_board.at(x)->setSE(m_board.at(x-3));m_board.at(x)->setNW(m_board.at(x+4));m_board.at(x)->setNE(m_board.at(x+5));
	x = 13;
	m_board.at(x)->setSW(m_board.at(x-4));m_board.at(x)->setSE(m_board.at(x-3));m_board.at(x)->setNW(m_board.at(x+4));m_board.at(x)->setNE(m_board.at(x+5));
	x = 14;
	m_board.at(x)->setSW(m_board.at(x-4));m_board.at(x)->setSE(m_board.at(x-3));m_board.at(x)->setNW(m_board.at(x+4));m_board.at(x)->setNE(m_board.at(x+5));
	x = 15;
	m_board.at(x)->setSW(m_board.at(x-4));m_board.at(x)->setSE(nullptr);           m_board.at(x)->setNW(m_board.at(x+4));m_board.at(x)->setNE(nullptr);
	x = 16;
	m_board.at(x)->setSW(nullptr);           m_board.at(x)->setSE(m_board.at(x-4));m_board.at(x)->setNW(nullptr);           m_board.at(x)->setNE(m_board.at(x+4));
	x = 17;
	m_board.at(x)->setSW(m_board.at(x-5));m_board.at(x)->setSE(m_board.at(x-4));m_board.at(x)->setNW(m_board.at(x+3));m_board.at(x)->setNE(m_board.at(x+4));
	x = 18;
	m_board.at(x)->setSW(m_board.at(x-5));m_board.at(x)->setSE(m_board.at(x-4));m_board.at(x)->setNW(m_board.at(x+3));m_board.at(x)->setNE(m_board.at(x+4));
	x = 19;
	m_board.at(x)->setSW(m_board.at(x-5));m_board.at(x)->setSE(m_board.at(x-4));m_board.at(x)->setNW(m_board.at(x+3));m_board.at(x)->setNE(m_board.at(x+4));
	x = 20;
	m_board.at(x)->setSW(m_board.at(x-4));m_board.at(x)->setSE(m_board.at(x-3));m_board.at(x)->setNW(m_board.at(x+4));m_board.at(x)->setNE(m_board.at(x+5));
	x = 21;
	m_board.at(x)->setSW(m_board.at(x-4));m_board.at(x)->setSE(m_board.at(x-3));m_board.at(x)->setNW(m_board.at(x+4));m_board.at(x)->setNE(m_board.at(x+5));
	x = 22;
	m_board.at(x)->setSW(m_board.at(x-4));m_board.at(x)->setSE(m_board.at(x-3));m_board.at(x)->setNW(m_board.at(x+4));m_board.at(x)->setNE(m_board.at(x+5));
	x = 23;
	m_board.at(x)->setSW(m_board.at(x-4));m_board.at(x)->setSE(nullptr);           m_board.at(x)->setNW(m_board.at(x+4));m_board.at(x)->setNE(nullptr);
	x = 24;
	m_board.at(x)->setSW(nullptr);           m_board.at(x)->setSE(m_board.at(x-4));m_board.at(x)->setNW(nullptr);           m_board.at(x)->setNE(m_board.at(x+4));
	x = 25;
	m_board.at(x)->setSW(m_board.at(x-5));m_board.at(x)->setSE(m_board.at(x-4));m_board.at(x)->setNW(m_board.at(x+3));m_board.at(x)->setNE(m_board.at(x+4));
	x = 26;
	m_board.at(x)->setSW(m_board.at(x-5));m_board.at(x)->setSE(m_board.at(x-4));m_board.at(x)->setNW(m_board.at(x+3));m_board.at(x)->setNE(m_board.at(x+4));
	x = 27;
	m_board.at(x)->setSW(m_board.at(x-5));m_board.at(x)->setSE(m_board.at(x-4));m_board.at(x)->setNW(m_board.at(x+3));m_board.at(x)->setNE(m_board.at(x+4));
	x = 28;
	m_board.at(x)->setSW(m_board.at(x-4));m_board.at(x)->setSE(m_board.at(x-3));m_board.at(x)->setNW(nullptr);           m_board.at(x)->setNE(nullptr);
	x = 29;
	m_board.at(x)->setSW(m_board.at(x-4));m_board.at(x)->setSE(m_board.at(x-3));m_board.at(x)->setNW(nullptr);           m_board.at(x)->setNE(nullptr);
	x = 30;
	m_board.at(x)->setSW(m_board.at(x-4));m_board.at(x)->setSE(m_board.at(x-3));m_board.at(x)->setNW(nullptr);           m_board.at(x)->setNE(nullptr);
	x = 31;
	m_board.at(x)->setSW(m_board.at(x-4));m_board.at(x)->setSE(nullptr);           m_board.at(x)->setNW(nullptr);           m_board.at(x)->setNE(nullptr);


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

}

Board::~Board()
{
}

void Board::print(ostream& os)
{
	os << "The board\n";
	os << "  | " << m_board.at(28)->show() << " | " << m_board.at(29)->show() << " | " << m_board.at(30)->show() << " | " << m_board.at(31)->show() << " | \n";
	os << "| " << m_board.at(24)->show() << " | " << m_board.at(25)->show() << " | " << m_board.at(26)->show() << " | " << m_board.at(27)->show() << " | \n";
	os << "  | " << m_board.at(20)->show() << " | " << m_board.at(21)->show() << " | " << m_board.at(22)->show() << " | " << m_board.at(23)->show() << " | \n";
	os << "| " << m_board.at(16)->show() << " | " << m_board.at(17)->show() << " | " << m_board.at(18)->show() << " | " << m_board.at(19)->show() << " | \n";
	os << "  | " << m_board.at(12)->show() << " | " << m_board.at(13)->show() << " | " << m_board.at(14)->show() << " | " << m_board.at(15)->show() << " | \n";
	os << "| " << m_board.at(8)->show() << " | " << m_board.at(9)->show() << " | " << m_board.at(10)->show() << " | " << m_board.at(11)->show() << " | \n";
	os << "  | " << m_board.at(4)->show() << " | " << m_board.at(5)->show() << " | " << m_board.at(6)->show() << " | " << m_board.at(7)->show() << " | \n";
	os << "| " << m_board.at(0)->show() << " | " << m_board.at(1)->show() << " | " << m_board.at(3)->show() << " | " << m_board.at(4)->show() << " | \n";
}

bool Board::move(Checkers::Move move)
{
	auto square = m_board.at(move.index);
	if (!square->isEmpty())
	{
		auto checker = square->getChecker();
		return checker->move(move.dir);
	}
	return false;
}

Checkers::Color Board::getColor(int square) const
{
	Checker* checker = m_board.at(square)->getChecker();
	if (checker != nullptr)
	{
		return checker->getColor();
	}
	return Checkers::EMPTY;
}


