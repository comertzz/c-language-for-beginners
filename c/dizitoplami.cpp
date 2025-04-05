#include<stdio.h>
#define BOYUT 10
int main()
{
	float sayilar[BOYUT];
	int i=0;
	float toplam;
	float ortalama;
	for(i=0;i<BOYUT;i++){
		printf("sayilari giriniz:\n");
		scanf("%f",&sayilar[i]);
	}
	for(i=0;i<BOYUT;i++){
		toplam+=sayilar[i];
	}
	printf("toplam %.2f\n",toplam);
	printf("girdiginiz sayilarin ortalamasi %.2f",toplam/BOYUT);
}
