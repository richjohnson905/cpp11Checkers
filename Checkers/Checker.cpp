/*
 * Checker.cpp
 *
 *  Created on: Feb 24, 2013
 *      Author: richardjohnson
 */

#include "Checker.h"
#include <memory>

using namespace std;

Checker::Checker(Square* square, Color color)
:m_square(square),
 m_color(color)
{
	m_square->setChecker(this);
}

Checker::~Checker()
{

}

string Checker::show()
{
	if (m_color == RED)
	{
		return "X";
	}
	return "O";
}

int Checker::work(int x, int y)
{
	return x + y;
}

bool Checker::move(Checkers::DirectionType dir)
{
	if (dir == Checkers::NE)
	{
		if (m_square->getNE() != NULL && m_square->getNE()->isEmpty())
		{
			m_square->setChecker(nullptr);
			m_square->getNE()->setChecker(this);
			return true;
		}
	}
	else if (dir == Checkers::NW)
	{
		if (m_square->getNW() != NULL && m_square->getNW()->isEmpty())
		{
			m_square->setChecker(nullptr);
			m_square->getNW()->setChecker(this);
			return true;
		}
	}
	else if (dir == Checkers::SE)
	{
		if (m_square->getSE() != NULL && m_square->getSE()->isEmpty())
		{
			m_square->setChecker(nullptr);
			m_square->getSE()->setChecker(this);
			return true;
		}
	}
	else
	{
		if (m_square->getSW() != NULL && m_square->getSW()->isEmpty())
		{
			m_square->setChecker(nullptr);
			m_square->getSW()->setChecker(this);
			return true;
		}
	}
	return false;
}