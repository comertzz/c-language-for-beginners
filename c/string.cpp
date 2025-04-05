#include<stdio.h>
int main()
{
	int i;
	char string1[20],string2[]="";
	printf("bir yazi giriniz\n");
	scanf("%s",string1);
	printf("yazi 1: %s\nyazi2:%s\n",string1,string2);
	printf("karakterler arasi boslukla yazi 1:\n",string1,string2);
	for(i=0;string1[i]!='\0';i++)
	printf("%c",string1[i]);
	printf("\n");
}
