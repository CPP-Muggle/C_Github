#include <stdio.h>
int main()
{
	int x;
	/****************************************/
	x = -3 + 4 * 5 - 6;
	printf("x=%d\n", x);
	/*The result above would be 11 since it equals to 20-3-6=11*/
	x = 3 + 4 % 5 - 6;
	printf("x=%d\n", x);
	/*The result above would be 1 since 4%5=4 and 3+4-6=1*/
	x = -3 * 4 % -6 / 5;
	printf("x=%d\n", x);
	/*The result above would be 0 since (-3*4)=-12; -12%-6=0 and 0/5=0*/
	x = (7 + 6) % 5 / 2;
	printf("x=%d\n", x);
	/*The result above would be 1 since (7+6)=13; 13%5=3; 3/2=1 since x is defined as an integer*/
	return 0;
}