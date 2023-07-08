#include "exam.h"

int specialSum(int arr[], int length, int num)
{
	/******** DON'T CHANGE ********/
	fx1(); // do not change!!!
	/******************************/
	
	/*Write your code down here*/	
	
	/*
	* I will use length as the paramater to advance the 
	* recursion steps: the stop condition: length == 0.
	* I am reluctant to change the pointer to arr and num.
	* In fact, I use length in this recursion, simillarly to 
	* an index i in an iterative for loop, only
	* this time, instead of i=0 to i<length and then i++,
		i start with i=length, i>0, and i--; 
	*/

	if(length==0){
		return 0;
	}
	int addition = 0;
	int current_value = arr[length - 1];
	if (current_value != num) {
		//the trenary operatior serves as an absolute function
		addition +=
			current_value < 0 ? (-1 * current_value) : current_value;
	}

	return addition + specialSum(arr, length - 1, num);
}
