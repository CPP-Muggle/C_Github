#include <stdio.h>
void main(){
	char c, temp;
	int numofchar = 0;
	int numofwords = 0;
	int numoflines = 1;
	c = getchar();
	while (c != 4){
		switch (c){
		case ' ':
			break;
		case '\n':
			break;
		default:
			numofchar++;
			break;
		}
		temp = c;
		c = getchar();
		switch (c){
		case '\n':
			numoflines++;
			switch (temp){
			case ' ':
				break;
			case '\n':
				break;
			default:
				numofwords++;
				break;
			}
			break;
		case ' ':
			switch (temp){
			case ' ':
				break;
			case '\n':
				break;
			default:
				numofwords++;
				break;
			}
			break;
		default:
			break;
		}
	}
	printf("The number of characters is: %d.\n", numofchar);
	printf("The number of words is:	%d.\n", numofwords);
	printf("The number of lines is : %d.\n", numoflines);
}