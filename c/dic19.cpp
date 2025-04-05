#include<stdio.h>
int main()
{
	int sayi,bir,iki,uc,dort;
	printf("sayi gir:");
	scanf("%d",&sayi);
	dort=sayi%10;
	uc=(sayi/10)%10;
	iki=(sayi/100)%10;
	bir=(sayi/1000);
	printf("yeni sayi %d",bir*1000+7+iki*100+7+uc*10+7+dort+7);
	printf("yeni sifre %d",uc*1000+7+dort*100+7+bir*10+7+iki+7);
}
