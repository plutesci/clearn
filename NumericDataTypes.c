#include <stdio.h>

int main()
{
	printf("How many dogs do you have?: ");
	double dogs;

	scanf("%lf", &dogs);

	printf("%f\n%e\n%g\n", dogs, dogs, dogs);


	/*Conversion Characters
	_______________________

	%f -Decimal notaion
	%e -Scientific notation
	%g -Computer decide
		< -4
		> 5
	*/



	return 0;
}
