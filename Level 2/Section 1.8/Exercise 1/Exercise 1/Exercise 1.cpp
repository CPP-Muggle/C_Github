/*This program aims to build a structure Article and creat one smaple with initialization*/
#include <stdio.h>
#define MAX 20
struct Article{
	int Articlenumber;
	int Quantity;
	char Description[MAX+1];
};//define the struct article with specification of each elements inside
void print(struct Article *p){
	printf("The Article Number is: %d\n", (*p).Articlenumber);
	printf("The Quantity is: %d\n", (*p).Quantity);
	printf("The Description is: ");
	int i = 0;
	while ((*p).Description[i] != '\0'&&i <= 20){
		printf("%c", (*p).Description[i]);
		i++;
	}
}//print function basically prints every element in the structure
void main(){
	Article newArt; //create a Article
	newArt.Articlenumber=00110011;
	newArt.Quantity=23;
	char temp[MAX + 1] = "I love programming !";//initialize all the elements that a structure needed
	int i;
	for (i = 0; i < MAX; i++){
		if (temp[i] != '\0')
			newArt.Description[i] = temp[i];
		else 
			break;
	}//have to initialize the string char by char since strcpy is not safe to use in VS 2013
	newArt.Description[i+1] = '\0';
	print(&newArt);//call the print function by sending a pointer that points to the newArt
}