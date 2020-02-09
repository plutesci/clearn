// App that asks user for input
#include <stdio.h>

int main()
{
	int radius; //Distance from outside of center to outer
	printf("please enter a radius:");
	scanf("%i", &radius); //address-of operator
	//int area = 3.14159 * (radius * radius); // logical error
	//printf("The given radius is: %i\n",radius);
	double area = 3.14159 * (radius * radius);
	printf("the area of a circle with %i radius  %f\n",radius, area);
	return 0;
}
