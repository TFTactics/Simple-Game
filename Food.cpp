#include "Food.h"

void Food::gen_food(){
	pos.X = (rand() % Width - 2) + 1;
	pos.Y = (rand() % Height - 2) + 1;
}

COORD Food::get_pos()	{	return pos;	}