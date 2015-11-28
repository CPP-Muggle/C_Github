/*This program aims to read characters from keyboard and show them on the screen only if "enter" key is dected*/
#include <stdio.h>
#include <stdlib.h>
void print(char(*p)){
	int i = 0;
	while (p[i] != '\n'){
		printf("%c", p[i]);
		i++;
	}
	printf("\n");
}//print function that prints every element in the char array
void main(){
	char* p = (char*)malloc(80* sizeof(char));//hold memory for 80 chars
	p = new char[80];//create a char array with the memory held
	int i = 0;
	while ((p[i] = getchar()) != 1&&i<=80){//when the next char is not CTRL+A 		
		if (p[i] == '\n'){//if "enter" key detected
			print(p);//print the string we have entered
			free(p);//clear the memory
			i = 0;//set the cound index back to 0
			p = new char[80];//intial the new char array again for next line
		}
		else{
			i++;
		}
	}
	printf("CTRL+A is a correct ending.");
}