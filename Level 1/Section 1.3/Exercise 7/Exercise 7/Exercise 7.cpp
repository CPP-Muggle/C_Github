#include <stdio.h>
void main(){
	int number, index;
	printf("Enter the number that will be multiplied: ");
	scanf_s("%d", &number);
	printf("Enter the number of power n: ");
	scanf_s("%d", &index);
	int result;
	if (index >= 0){
		result = number << index;
	}
	else{
		result = number >> index;
	}
	printf("The result of multiplication should be: %d", result);
}