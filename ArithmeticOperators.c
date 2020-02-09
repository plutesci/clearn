#include <stdio.h>

int main()
{
	int x = 2 + 3 * 4 / (3 - 2); //operator precedence
	int y = 5 % 2; //modulus operator - remander (int)
	printf("%i\n", x);
	printf("%i\n", y);
	return 0;
}
