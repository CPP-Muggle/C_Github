#include <stdio.h>
void main(){
	int numof0 = 0;
	int numof1 = 0;
	int numof2 = 0;
	int numof3 = 0;
	int numof4 = 0;
	char c;
	while ((c = getchar()) != EOF&&c != 26 && c != 4){
		switch (c){
		case '0':
			numof0++;
			break;
		case '1':
			numof1++;
			break;
		case '2':
			numof2++;
			break;
		case '3':
			numof3++;
			break;
		case '4':
			numof4++;
			break;
		default:
			break;
		}
	}
	printf("Number 0 appears %d times.\n", numof1);
	printf("Number 1 appears %d times.\n", numof1);
	printf("Number 2 appears %d times.\n", numof2);
	printf("Number 3 appears %d times.\n", numof3);
	printf("Number 4 appears %d times.\n", numof4);
}