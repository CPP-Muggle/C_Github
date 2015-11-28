#ifndef PRINT1,PRINT2
#define PRINT1(a)(printf("%c\n",a))
#define PRINT2(a,b)(printf("%c  %c\n",a,b))
#define MAX2(x,y)((x>=y)?x:y)//if x>=y, return x, else return y
#define MAX3(x,y,z)((MAX2(x,y)>=MAX2(x,z))?MAX2(x,y):MAX2(x,z))// if Max2(x,y)>=Max2(x,z), return the largest value from (x,y),else the largest value from (x,z)
#endif