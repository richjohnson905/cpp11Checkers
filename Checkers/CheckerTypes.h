/*
 * CheckerTypes.h
 *
 *  Created on: Feb 26, 2013
 *      Author: richardjohnson
 */

#ifndef CHECKERTYPES_H_
#define CHECKERTYPES_H_


namespace Checkers
{
	enum Color
	{
		RED,
		BLACK,
		EMPTY
	};

	enum DirectionType
	{
		NW,
		NE,
		SW,
		SE
	};

	struct Move
	{
		DirectionType dir;
		int index;
	};

}

#endif /* CHECKERTYPES_H_ */
