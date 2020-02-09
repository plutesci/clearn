#include <stdio.h>

int main()

{
	int miles, yards;
	float kilometers;

	miles = 26;
	yards = 385;
	kilometers = 1.609 * (miles + yards / 1760.0);
	printf("\na marathon is %f kilometers\n\n", kilometers);


//	printf("yell something");
	return 0;
}
