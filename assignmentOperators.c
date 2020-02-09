#include <stdio.h>
// Working of assignment operators
int main()
/***************************************
 Operator	Example 	Same as
 =		a = b		a = b
 +=		a += b		a = a+b
 -= 		a -= b		a = a-b
 *=		a *= b		a = a*b
 /=		a /= b		a = a/b
 %=		a %= b		a = a%b
****************************************/
{

	int a = 5, c;

	c =a;		// c is 5
	printf("c = %d\n", c);
	c += a;		// c is 10
	printf("c = %d\n", c);
	c -= a;		// c is 5
	printf("c = %d\n", c);
	c *= a;		// c is 25
	printf("c = %d\n", c);
	c /= a;		// c is 5
	printf("c = %d\n", c);
	c %= a;		// c = 0
	printf("c = %d\n", c);
	return 0;

}
