/* Predict what will be printed on the screen */
#include <stdio.h>
#define PRD(a) printf("%d", (a) ) // Print decimal
#define NL printf("\n"); // Print new line
// Create and initialse array
int a[] = { 0, 1, 2, 3, 4 };
int main()
{
	int i;
	int* p;
	for (i = 0; i <= 4; i++) PRD(a[i]); // 1
	/*output 01234*/
	NL; //new line printed
	for (p = &a[0]; p <= &a[4]; p++) PRD(*p); // 2
	//output:01234
	NL; //new line printed
	NL; //new line printed
	for (p = &a[0], i = 0; i <= 4; i++) PRD(p[i]); // 3
	//output:01234 
	NL;
	for (p = a, i = 0; p + i <= a + 4; p++, i++) PRD(*(p + i)); // 4
	//output:024 since for each iteration p++ and i++, the pointer shift two index each time
	NL;
	NL;
	for (p = a + 4; p >= a; p--) PRD(*p); // 5
	//output:43210 reverse iteration
	NL;
	for (p = a + 4, i = 0; i <= 4; i++) PRD(p[-i]); // 6
	//output:43210 reverse iteration
	NL;
	for (p = a + 4; p >= a; p--) PRD(a[p - a]); // 7
	//p-a=4,3,2,1,0 as p--; thus output:43210
	NL;
	return 0;
}