#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
	char s[100];
	printf("giriniz:");
	scanf("%s",&s);
	printf("%s",tolower(s));
}
