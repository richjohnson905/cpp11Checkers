/*
 * GameEngine.cpp
 *
 *  Created on: Feb 27, 2013
 *      Author: richardjohnson
 */
#include "stdafx.h"
#include "GameEngine.h"
#include "Board.h"
#include "CheckerTypes.h"
#include <future>
#include <iostream>
#include "MoveMaker.h"

using namespace std;

GameEngine::GameEngine(Board& board)
: m_board(board)
{

}

GameEngine::~GameEngine()
{
}

int foo()
{
	return 444;

}

void bar()
{
	cout << "YES" << endl;
}

void GameEngine::move()
{
	Board boardCopy(m_board);
	MoveMaker mm(boardCopy);

	m_board.move(mm.getMove());
//	future<int> f1 = async(foo);
	future<void> f1(async(bar));
}
