/*this program aims to help switch the value of two varibles by points*/
#include <stdio.h>
void Swap(float *a, float *b){//input two pointers
	float temp;//define a temp pointer to help switching
	temp = *a;//store the value of "a" pointing to in temp
	*a = *b;// update the value of "a" pointing to to the value of "b" pointing to 
	*b = temp;//update the value of "b" pointing to to be the value stored in temp;
}
void main(){
	float i, j;
	printf("Please enter the value of i: ");
	scanf_s("%f", &i);
	printf("Please enter the value of j: ");
	scanf_s("%f", &j);
	Swap(&i, &j);//call the switch function
	printf("The value of i is %f\n", i);
	printf("The value of j is %f\n", j);
}