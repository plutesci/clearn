#include <stdio.h>

int main()
{
	int i;
	double number, sum = 0.0;

	for(i=1; i <= 10; ++i)
	{
		printf("Enter a n%d: ",i);
		scanf("%lf",&number);

		// If the user enters a negative number, the loop ends
		if(number < 0.0)
		{
			break;
		}

		sum += number; // sum = sum + number;
	}

		printf("sum = %.2lf",sum);

		return 0;
}
