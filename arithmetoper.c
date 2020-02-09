#include <stdio.h>

int main ()
{

	int piecesOfPizza = 5;
	int numberOfEaters = 2;
	int leftOver = piecesOfPizza % numberOfEaters;

	printf("%i\n", leftOver);

	//17  % 2 = 1
	//2(k) + 1
	//2(k)
	//18 % 2 = 0
	// just ignore me
	return 0;

}
