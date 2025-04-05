#include<stdio.h>

struct Ogrenci{
	char isim[20];
	char cinsiyet;
	int vize;
	int final;
	double ort;
};
int main(){
	struct Ogrenci ogrenciler[3];
	int i;
	for(i=0;i<3;i++){
	printf("isim giriniz.");
	scanf("%s",ogrenciler[i].isim);
	printf("cinsiyet giriniz.");
	scanf(" %c",&ogrenciler[i].cinsiyet);
	printf("vize giriniz.");
	scanf("%d",&ogrenciler[i].vize);
	printf("final giriniz.");
	scanf("%d",&ogrenciler[i].final);
	ogrenciler[i].ort=ogrenciler[i].vize*0.4+ogrenciler[i].final*0.6;
	}
	for(i=0;i<3;i++){
	printf("%-10s %c %d %d %f\n ",ogrenciler[i].isim,ogrenciler[i].cinsiyet,ogrenciler[i].vize,ogrenciler[i].final,ogrenciler[i].ort);
}
}
