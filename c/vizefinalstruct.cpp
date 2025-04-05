#include<stdio.h>
struct Ogrenci{
	char isim[20];
	char cinsiyet;
	int vize;
	int final;
	double ort;
};
int main(){
	struct Ogrenci o1;
	printf("isim giriniz.");
	scanf("%s",o1.isim);
	printf("cinsiyet giriniz.");
	scanf(" %c",&o1.cinsiyet);
	printf("vize giriniz.");
	scanf("%d",&o1.vize);
	printf("final giriniz.");
	scanf("%d",&o1.final);
	o1.ort=o1.vize*0.4+o1.final*0.6;
	printf("%-10s %c %d %d %f",o1.isim,o1.cinsiyet,o1.vize,o1.final,o1.ort);
	}
