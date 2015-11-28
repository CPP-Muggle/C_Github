#include <stdio.h>
void main(){
	float height, base;
	printf("Enter the height of triangle:\n");
	scanf_s("%f", &height);
	printf("Enter the base of triangle:\n");
	scanf_s("%f", &base);
	printf("The surface area of triangle is %f", base*height / 2);
}