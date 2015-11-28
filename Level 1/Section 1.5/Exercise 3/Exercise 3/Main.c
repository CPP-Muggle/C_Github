#include <stdio.h>
extern float print(float n);
void main(){
	float n;
	printf("Please enter a number ");
	scanf_s("%f", &n);
	print(n);
}