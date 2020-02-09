#include <stdio.h>
// program to add up two integers
int main()

{
	int number1, number2, sum;

	printf("Enter two integers: ");
	scanf("%d %d", &number1, &number2);

	// calculating sum
	sum = number1 + number2;

	printf("%d + %d = %d\n", number1, number2, sum);
	return 0;
}
