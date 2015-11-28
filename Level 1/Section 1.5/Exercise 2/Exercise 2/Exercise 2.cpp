#include <stdio.h>
int factorial(int number){
	if (number == 0)
		return 1;
	else if (number == 1)
		return 1;
	else
		return number*factorial(number - 1);
}
void main(){
	int number;
	printf("Please enter a number ");
	scanf_s("%d", &number);
	printf("The factorial of %d is %d", number, factorial(number));
}