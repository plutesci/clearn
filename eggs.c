// Divids eggs into dozens
#include <stdio.h>

int main()
{
	printf("The number of eggs for the day: ");

	int eggs;
	scanf("%i", &eggs);

	double dozen = (double) eggs / 12; //type casting

	printf("You have %f dozen eggs.\n", dozen);

	return 0;

}
