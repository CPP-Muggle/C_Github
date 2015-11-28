#include <stdio.h>
void printnumber(int n){
	if (n <= 0){
		putchar('-');
		n = -n;
	}
	if (n / 10 >0){
		printnumber(n / 10);
	}
	putchar(n % 10 + '0');
}
void main(){
	int n;
	scanf_s("%d", &n);
	printnumber(n);
}