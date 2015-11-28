#include <stdio.h>
void main(){
	int i = 2;
	int a = i--;
	printf("Case 1 (i--), the value of a is %d and the current value of i is %d\n", a, i);
	i = 2;
	a = --i;
	printf("Case 2 (--i), the value of a is %d and the current value of i is %d\n", a, i);
}