#include <cstdlib>
#include <ctime>
#include "Maze.hpp"

using namespace std;

Room::pick(){
	int random = rand() % 4 + 1;
	switch (random) {
	case 1:
		x_ = 1;
		break;
	case 2:
		x_ = 2;
		break;
	case 3:
		x_ = 3;
		break;
	case 4:
		x_ = 4;
		break;
	}

	random = rand() % 4 + 1;	//new random number

	switch (random) {
	case 1:
		y_ = 97;
		break;
	case 2:
		y_ = 98;
		break;
	case 3:
		y_ = 99;
		break;
	case 4:
		_ = 100;
		break;
	}
}
Room::bool goodDirection(const char) const{
	bool possible;
	switch(char){
	case 117:
		if(x_ >=  1)
		break;
	case 100:
		
		break;
	case 108:
		
		break;
	case 114:
		
		break;

	}
		return possible;
}