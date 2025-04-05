#include<stdio.h>
int main(){
	int *sayi1,*sayi2;
	int s1,s2,toplam;
	printf("sayi 1 gir.");
	scanf("%d",&s1);
	printf("sayi 2 gir.");
	scanf("%d",&s2);
	sayi1=&s1;
	sayi2=&s2;
	toplam=(*sayi1)+(*sayi2);
	printf("toplam %d",toplam);
}
