#include <stdio.h>
// Working with logical operators
int main()
/*****************************************************************************
Operator	Meaning				Example
 &&		Lgical AND. True only if all    if c = 5 and d = 2 then, express-
		Operands are true		ion ((c==5 && (d>5)) equals to 0.

||		Logical OR. True only if one    if c = 5 and d = 2 then, express=
		operand is true			ion ((c==5 || (d>5)) equals to 1.

!		Logical NOT. True only if the	if c = 5 then, expression !(c==5)
		operand is 0			equals to 0.
*****************************************************************************/
{
	int a = 5, b = 5, c = 10, result;

	result = (a == b) && (c > b);
        printf("(a == b) && (c > b) is %d \n", result);
	result = (a == b) && (c < b);
        printf("(a == b) && (c < b) is %d \n", result);
	result = (a == b) || (c < b);
        printf("(a == b) || (c < b) is %d \n", result);
	result = (a != b) || (c < b);
        printf("(a != b) || (c < b) is %d \n", result);
	result = !(a != b);
	printf("!(a == b) is %d \n", result);
	result = !(a == b);
	printf("!(a == b) is %d \n", result);

	return 0;
}
/*******************************************************************************
(a == b) && (c > 5) evaluates to 1 because both operands (a == b) and (c > b) is 1 true)
(a == b) && (c < b) evaluattes to 0 because operand (c < b) is 0 (false)
(a == b) || (c < b) evaluation to 1 because (a = b) is 1 (true).
(a != b) || (c < b) evaluates to 0 because both operand (a != b) and (c < b) are 0 (false)
!(a != b) evaluates to 1 because operand (a != b) is 0 (flase) hense. !(a != b) is 1 true
!(a == b) evaluates to 0 because (a == b) is (true), Hense, !(a == b) is 0 (false) 





********************************************************************************/
