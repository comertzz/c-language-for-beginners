#include<stdio.h>
int main()
{
	int i,toplam;
	for(i=1;i<=99;i++){
		printf("%d\t",i++);
		toplam+=i;
	}
	printf("\ntoplam %d",toplam);
}
