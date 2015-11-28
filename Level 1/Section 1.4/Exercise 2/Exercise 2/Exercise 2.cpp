#include <stdio.h>
void main(){
	char c, temp;
	int numofchar = 0;
	int numofwords = 0;
	int numoflines = 1;
	c = getchar();
	do{
		if (c != '\n')
			numofchar++;
		temp = c;
		c = getchar();
		if (c == '\n'){
			if (temp != ' '&& temp != '\n')
				numofwords++;
			numoflines++;
		}
		if (c == ' ')
			if (temp != ' '&&temp != '\n')
				numofwords++;
	} while (c != 4);
	printf("The number of characters is: %d\n", numofchar);
	printf("The number of words is:	%d\n", numofwords);
	printf("The number of lines is : %d\n", numoflines);
}