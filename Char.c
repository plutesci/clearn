#include <stdio.h>

int main()

{
	char ASCII;
	printf("Please enter a character: ");
	scanf("%c", &ASCII);
	printf("%i\n", ASCII);

	int interger;
	printf("Please enter an interger between 0 - 127: ");
	scanf("%i", &interger);
	printf("%c\n", interger);

	//Math with ASCII;
	char mathz = 'A' + '\t';
	printf("A(65) + \\t(11) = %c(%d)\n", mathz, mathz);


	return 0;
}
