#include <stdio.h>
int main()
//adds + 1 to 123 = 124
{
	int pizzasToEat = 123;
	pizzasToEat = pizzasToEat + 1; //full way
	pizzasToEat++; //shorthand for above line^
	printf("pizzasToEat: %i\n", pizzasToEat);
	return 0;
}
/**************************

	int pizzasToEat = 100;

	int output = pizzasToEat++;

	printf("Pizzas to eat: %i\n", output);
	return 0;
	//code outputs to = 100





	int pizzaToEat = 100;
	int output = pizzasToEat--;

	printf("output: %i\n", output);
	printf("pizzasToEat: %i\n", pizzasToEat);
	return 0;

***************************/
