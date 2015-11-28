#include <stdio.h>
void main(){
	float fahrenheit = 0;
	float max_fahrenheit = 300;
	printf("     Temperature Conversion     \n");
	printf("--------------------------------\n");
	printf("Fahrenheit                Celsius\n");
	while (fahrenheit <= max_fahrenheit){
		printf("   %.1f                %10.1f\n", fahrenheit, (5.0 / 9)*(fahrenheit - 32));
		fahrenheit += 20;
	}
}