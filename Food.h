#ifndef FOOD_H
#define FOOD_H

#include <windows.h>
#include <cstdio>

#define Width 50
#define Height 25

class Food{
	private:
		COORD pos;

	public:
		void gen_food();
		COORD get_pos();
};

#endif
