#ifndef SNAKE_H
#define SNAKE_H

#include <windows.h>
#include <vector>

#define Width 50
#define Height 25

using namespace std;

class Snake{
	private:
		COORD pos;
		int len;
		int vel;
		char dir;
		vector<COORD> body;
 
	public:
		Snake(COORD pos, int vel);
		
		void grow();
		void move_snake();
		void direction(char dir);
		
		vector<COORD> get_body();
		
		bool collided();
		bool eaten(COORD food);
		
		COORD get_pos();

};

#endif
