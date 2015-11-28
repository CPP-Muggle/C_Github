#include <stdio.h>
float minus(float a, float b){
	return a - b;
}
void main(){
	float a, b;
	printf("Enter the first number ");
	scanf_s("%f", &a);
	printf("Enter the second number ");
	scanf_s("%f", &b);
	printf("The difference between two numbers is %.4f", minus(a, b));
}
