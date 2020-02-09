#include <stdio.h>

int main()
{
	//operator precedence
	//* / + -
	// How do you know? read from left or right, right or left???
	int x, y;
	x = (y = 5);
	//y = 5;
	//x = y;

	int z = 20;
	y = 2;
	x = -y + z;

	//x = (y + z); x = -22
	//x =(-y) + z; x = 18

	printf("%i\n",x );
	return 0;
}

/***

here is the list for reference
https://en.cppreference.com/w/c/language/operator_precedence

***/
