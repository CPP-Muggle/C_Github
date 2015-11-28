#include <stdio.h>
void main(){
	float celsius = 0;
	float max_celsius = 300;
	printf("          Temperature Conversion     \n");
	printf("     --------------------------------\n");
	printf("     Celsius                Fahrenheit\n");
	for (celsius = 0; celsius <= 19; celsius++){
		printf("%10.1f                %10.1f\n", celsius, (9.0 / 5)*celsius + 32);
	}
}