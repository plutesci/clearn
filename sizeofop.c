//Yoiu can always check the size of a variable using the sizeof() 
//operator

#include <stdio.h>
int main() {
	short a;
	long b;
	long long c;
	long double d;

	printf("size of short = %liu bytes\n", sizeof(a));
	printf("size of long = %li bytes\n", sizeof(b));
	printf("size of long long = %lu bytes\n", sizeof(c));
	printf("size of long double = %lilf bytes\n", sizeof(d));
	return 0;
}

/*
Output... should be showing sizes in bytes...were all set %d
I think all the %d will need to be changed...would not compile
like ll for long long ld something for long double..
It works now, if its correct I have no idea at the moment...
*/
