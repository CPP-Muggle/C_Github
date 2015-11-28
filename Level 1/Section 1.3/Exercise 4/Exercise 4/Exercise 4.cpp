#include <stdio.h>
void main(){
	float married;
	printf("Enter a number ");
	scanf_s("%f", &married);
	/*print "single" if the value of married is equal to 0 and married otherwise*/
	printf((married == 0) ? "single" : "married");
}