#include <stdio.h>
//ascii character return, show's ascii value for the character input

int main()

{

	char chr;
	printf("Enter a character: ");
	scanf("%c", &chr);

	// When %c is used, a character is displayed
	printf("You entered %c.\n", chr);

	// When %d is used, ASCII value is displayed
	printf("You entered %d.\n", chr);
	return 0;

}
