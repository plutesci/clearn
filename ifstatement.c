#include <stdio.h>

int main()
{
	int number;

	printf("Enter an integer: ");
	scanf("%d", &number);

	// true is number is less than 0
	if (number < 0)
	{
		printf("You entered %d.\n", number);
	}

	printf("The ...if... statement is easy.\n");
	return 0;
}
