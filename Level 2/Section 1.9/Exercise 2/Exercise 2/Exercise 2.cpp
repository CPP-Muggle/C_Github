/*This program aims to read characters from keyboard and print them in a specific file if "enter" key is dected*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LENGTH 300;
void print(char(*p),FILE *fp){
	int i = 0;
	while (p[i] != '\n'){
		fprintf(fp,"%c", p[i]);//print every char into the file that pointer fp points to
		i++;
	}
	fprintf(fp,"\n");
}
void main(){
	char* p = (char*)malloc(80 * sizeof(char));//allocate memory for 80 characters
	p = new char[80];//create a char array with the memory
	int i = 0;
	FILE *fp;
	char filename[20];
	printf("Enter the file name: ");//enter the file name by user
	char temp;
	int j = 0;
	while ((temp = getchar()) != '\n'){
		filename[j] = temp;
		j++;
	}
	filename[j++] = '.';
	filename[j++] = 't';
	filename[j++] = 'x';
	filename[j++] = 't';
	filename[j] = '\0';//input filename manually since I cant break the system warning of using scanf
	fopen_s(&fp,filename, "w+");//open the file(if the file not exist, then creat one
	while ((p[i] = getchar()) != 1&&i<=80){//when the next char is not CTRL+A 	
		if (p[i] == '\n'){//if "enter" key detected
			print(p,fp);//print the string we have entered to the file
			free(p);//clear the memory
			i = 0;//set the cound index back to 0
			p = new char[80];//intial the new char array again for next line
		}
		else{
			i++;
		}
	}
	printf("CTRL+A is a correct ending");
	fclose(fp);//close the file
}