#include <stdio.h>
int main()
{
	int x = 1;
	int y = 1;
	int z = 1;
	x += y += x;
	/*The equation above equals to x=x+y;y=y+x, thus x=2;y=3*/
	printf("%d\n\n", (x<y) ? y : x); // Number 1
	/*the program can be translate into: if x<y,print y,else print x. Since y=3>x, the result should be 3*/
	printf("%d\n", (x<y) ? x++ : y++); // Number 2
	/*the program can be translate into: if x<y,x=x+1, else y=y+1. Since y=3>x, x=x+1=3 */
	printf("%d\n", x); // Number 3
	/*the current value of x should be 3*/
	printf("%d\n", y); // Number 4
	/*the current value of y should be 3*/
	return 0;
}