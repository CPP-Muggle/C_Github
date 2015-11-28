/*The aim of this program is to print out the day name by given the day index
The addresses of daynames are pointed by a pointer array*/
#include <stdio.h>
char *DayName(int n){
    char *names[7] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
	//initialize a pointer array that point to the first character of each string
	return names[n];
}
void main(){
	int index;
	printf("Enter the day-number: ");
	scanf_s("%d", &index);
	char *p = DayName(index);//locate the pointer that points to the day index
	int i = 0;
	printf("The day %d is a ", index);
	while (p[i] != '\0'){
		printf("%c", p[i++]);
	}//print out the whole string until '\0' is met
}