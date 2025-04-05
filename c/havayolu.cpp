#include<stdio.h>
int main()
{
int bolum,koltuk;
printf("istediginiz bolumu seciniz, iptal etmek icin baska bir sayiya basiniz\n:\n1=sigara icilen\n2=sigara icilmeyen\n");
scanf("%d",&bolum);
switch(bolum){
	case 1: printf("1 ile 5 arasinda bir koltuk seciniz:\n");
			scanf("%d",&koltuk);
			break;
	case 2: printf("6 ile 10 arasinda bir koltuk seciniz:\n");
			scanf("%d",&koltuk);
			break;
	default: printf("iptal etmek istediginize emin misiniz");
			break;			
	}
	printf("sectiginiz bolum: %d\n sectiginiz koltuk: %d",bolum,koltuk);
}
