/*This program aims to call functions from header file to print one variables or two*/
#include <stdio.h>
#include "Defs.h"//inluce the header file that contains function PRINT1,PRINT2
void main(){
	char a, b;
	printf("Enter the first variables: ");
	scanf_s("%c", &a);
	printf("Enter the second variables: ");
	b = getchar();
	while (b == '\n'){
		b = getchar(); //get the variable b that is not '\n'
	}
	PRINT1(a); //call the function PRINT1 from hearder file
	PRINT2(a, b);//call function PRINT2 from hearder file
}