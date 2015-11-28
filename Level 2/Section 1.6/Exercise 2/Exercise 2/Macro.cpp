/*this program aims to pick up the largest value from two or three 
variables where the max function are called from a header file*/
#include <stdio.h>
#include "Defs.h"
void main(){
	float x, y, z;
	char flag;
	printf("Enter the first number: ");
	scanf_s("%f", &x);
	printf("Enter the second number ");
	scanf_s("%f", &y);
	printf("Enter Y if third number needed and N to exit.");//determine whether there are 2 or 3 variables need to enter
	flag = getchar();
	while (flag == '\n'){
		flag = getchar();
	}
	if (flag == 'Y'){
		printf("Enther the third number: ");
		scanf_s("%f", &z);
		printf("The maximum among three variables is %f.", MAX3(x, y, z));//call function MAX3 to find maximum from 3 variables
	}
	else
		printf("The maimum between two variables is %.4f.", MAX2(x, y));//call function MAX2 to find maximum from 2 variables
}