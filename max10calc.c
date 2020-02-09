// Program to calculate the sum of a maximum of 10 numbers.
// If a negative number is entered, the loop terminates

# include <stdio.h>

// I suspect the sum equals will break 
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

	printf("Sum = %.2lf",sum);

	return 0;
}



/*
OUTPUT
  Enter a n1: 2.4
  Enter a n2: 4.5
  Enter a n3: 3.4
  Enter a n4: -3
  Sum = 10.30
*/
