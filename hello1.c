#include <stdio.h>

/* The Simplest C Program */
/*
This print out 1245689 and misses 3 7
error.....
hello1.c:8:1: error: expected identifier or ‘(’ before ‘for’
    8 | for (i=1;i<=10;++i)
      | ^~~
hello1.c:8:11: error: expected ‘=’, ‘,’, ‘;’, ‘asm’ or ‘__attribute__’ before ‘<=’ token
    8 | for (i=1;i<=10;++i)
      |           ^~
hello1.c:8:16: error: expected identifier or ‘(’ before ‘++’ token
    8 | for (i=1;i<=10;++i)
      |                ^~
*/

for (i=1;i<=10;++i)
{
	if (i==3)
	continue;
	if (i==7)
	break;
	printf("%d ",i);
}

/*int main(int argc, char **argv)
{
	printf("Hello Mutha Fucking Worldz\n");
	return 0;
}
*/
/*
OUTPUT:
Hello World
nidkkshkcjlscbkskcn comment mofo
*/
