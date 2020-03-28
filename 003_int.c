#include<stdio.h>
void main (void)
{
int a;
a=10;
short int b;
long int c;
long long int d;
printf("size of int: %d\n",sizeof(int));
printf("size of a  : %d\n\n",sizeof(a));
printf("size of short int: %d\n",sizeof(short int));
printf("size of b        : %d\n\n",sizeof(b));
printf("size of long int: %d\n",sizeof(long int));
printf("size of c       : %d\n\n",sizeof(c));
printf("size of long long int: %d\n",sizeof(long long int));
printf("size of d            : %d\n\n",sizeof(d));
}
