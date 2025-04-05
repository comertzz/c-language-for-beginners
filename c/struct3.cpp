#include<stdio.h>
#include<string.h>
struct adress{
	char mahalle[15];
	char cadde[20];
	char sokak[15];
};
struct ogrenci{
	char isim[20];
	char soyisim[20];
	int numara;
	int yas;
	struct adress adres;
	
};
int main(){
	struct ogrenci ogrenci1;
	strcpy(ogrenci1.isim,"mustafa");
	strcpy(ogrenci1.soyisim,"baltaci");
	ogrenci1.numara=132;
	ogrenci1.yas=24;
	strcpy(ogrenci1.adres.mahalle,"bahcelievler");
	strcpy(ogrenci1.adres.cadde,"7.cadde");
	strcpy(ogrenci1.adres.sokak,"1032 sok.");
	printf("%s %s %d %d %s %s %s",ogrenci1.isim,ogrenci1.soyisim,ogrenci1.numara,ogrenci1.yas,ogrenci1.adres.mahalle,ogrenci1.adres.cadde,ogrenci1.adres.sokak);
	
}
