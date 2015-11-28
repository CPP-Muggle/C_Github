#include <stdio.h>
void main()
{
	int number;
	printf("Enter the number you want to shift: ");
	scanf_s("%d", &number);
	float temp = number;
	number = number >> 2;
	if (number >= 0){
		printf("The result is %d, cannot determine it is a arithmetic shift or logical shift,negative number required.", number);
	}
	else{
		if (temp*number >= 0){
			printf("The result is %d, it is a arithmetic shift", number);
		}
		else{
			printf("The result is %d, it is a logical shift", number);
		}
	}
}