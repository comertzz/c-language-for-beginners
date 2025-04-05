#include<stdio.h>
int main()
{
	int sayi,bir,iki,uc,dort,bes;
	printf("sayi gir:");
	scanf("%d",&sayi);
	bes=sayi%10;
	dort=(sayi/10)%10=;
	uc=(sayi/100)%10;
	iki=(sayi/1000)%10;
	bir=(sayi/10000)%10;
	if(bir==bes && iki==dort){
		printf("palindrom");
	}
}
