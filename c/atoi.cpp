#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

int main(){
	char str1[20];
	char str2[20];
	char str3[20];
	char str4[20];
	int val1,val2,val3,val4;
	strcpy(str1,"12.3");
	val1=atoi(str1);
	strcpy(str2,"12.4");
	val2=atoi(str2);
	strcpy(str3,"12.5");
	val3=atoi(str3);
	strcpy(str4,"12.6");
	val4=atoi(str4);
	printf("%d",val1+val2+val3+val4);
	
}
