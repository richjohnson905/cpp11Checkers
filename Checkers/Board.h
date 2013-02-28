/*
 * Board.h
 *
 *  Created on: Feb 24, 2013
 *      Author: richardjohnson
 */

#ifndef BOARD_H_
#define BOARD_H_

#include <memory>
#include <vector>
#include "Square.h"
#include "CheckerTypes.h"
#include <fstream>


#include <gtest/gtest_prod.h>

class Checker;

class Board {
public:
	Board();
	virtual ~Board();

	bool move(int from, Checkers::DirectionType dir);
	void print(std::ostream& os);
private:
	std::vector<Square*> m_board;
	std::vector<Checker*> m_red;
	std::vector<Checker*> m_black;

	FRIEND_TEST(BoardTest, BoardSquares);
};

#endif /* BOARD_H_ */