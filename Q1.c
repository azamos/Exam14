#include "exam.h"

int canEat(char arr[8][8], int x, int y)
{
	if (arr[x][y] == '*')
		return 0;
	char p1 = arr[x][y];
	/*
	* step 1: check if can eat in directon
	* of upper-left diagonally:
	*	1.1. check if destination is inside board.
	*	1.2. check if destination is free.
	*	1.3. check if between destination and source there is
	*		 a cell with value!='*' or the opposite of source value
	*/
	if (x - 2 >= 0 && y - 2 >= 0 //1.1
		&& arr[x-2][y-2] == '*'  //1.2
		){
		//1.3
		if (arr[x - 1][y - 1] != '*'
			&& arr[x - 1][y - 1] != p1) {
			return 1;
		}
	}
	/*
	* Now, I must run a similar check for the 3 remaining directions:
	*	North East, South East, and South West.
	*	if none of them returns 1, I shal return 0.
	*/

	/*
	* North East
	*/
	if (x + 2 < 8 && y - 2 >= 0 //1.1
		&& arr[x + 2][y - 2] == '*'  //1.2
		) {
		//1.3
		if (arr[x + 1][y - 1] != '*'
			&& arr[x + 1][y - 1] != p1) {
			return 1;
		}
	}
	/*
	* South East
	*/
	if (x + 2 < 8 && y + 2 < 8 //1.1
		&& arr[x + 2][y + 2] == '*'  //1.2
		) {
		//1.3
		if (arr[x + 1][y + 1] != '*'
			&& arr[x + 1][y + 1] != p1) {
			return 1;
		}
	}
	/*
	* South West
	*/
	if (x - 2 >= 0 && y + 2 < 8 //1.1
		&& arr[x - 2][y + 2] == '*'  //1.2
		) {
		//1.3
		if (arr[x - 1][y + 1] != '*'
			&& arr[x - 1][y + 1] != p1) {
			return 1;
		}
	}
	return 0;
}