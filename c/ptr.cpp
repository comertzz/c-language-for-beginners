#include<stdio.h>
int main()
{
	int i=5;
	int *p=&i;
	printf("%u\n",p);
	printf("%d",*p);
}
