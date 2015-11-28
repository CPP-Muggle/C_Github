/* Assignment operators */
#include <stdio.h>
void main(){
	int x = 2;
	int y;
	int z;
	x *= 3 + 2;
	printf("x=%d\n", x);
	/*The result above should be 10 since it equals to x=x*(3+2)*/
	x *= y = z = 4;
	printf("x=%d\n", x);
	/*The result above should be 40 since it equals to x=x*y;y=z=4*/
	x = y == z;
	printf("x=%d\n", x);
	/*The result above should be 1 since y euqals to z*/
}