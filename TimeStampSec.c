#include <stdio.h>

int main()

{
	double a, b, product;
	printf("Enter how many hours and minutes: ");
	scanf("%lf\n", &a);

	printf("for now type 60 for seconds: ");
	scanf("%lf\n", &b);

	//calcs products
	product = a * b;

	//result up to 2 decimal point is desplayed using %.2lf
	printf("Product = %.2lf", product);

	return 0;
}
