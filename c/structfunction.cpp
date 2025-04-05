#include<stdio.h>
struct ogrenci{
	char isim[15];
	char soyisim[20];
	int numara;
};
void goster(struct ogrenci a){
	printf("ogrencinin bilgileri %s %s %d",a.isim,a.soyisim,a.numara);
}
struct ogrenci degerAl(){
	struct ogrenci yeni;
	printf("bilgileri girin:");
	scanf("%s %s %d",&yeni.isim,&yeni.soyisim,&yeni.numara);
	return yeni;
}
int main(){
	struct ogrenci ogrenci1=degerAl();
	goster(ogrenci1);
	
}
