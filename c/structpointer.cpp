#include<stdio.h>
#include<string.h>
struct ogrenci{
	char isim[20];
	char soyisim[20];
	int numara;
};
int main(){
	struct ogrenci *tut;
	struct ogrenci ogrenci1;
	strcpy(ogrenci1.isim="muhammet");
	strcpy(ogrenci1.soyisim="comert");
	ogrenci1.numara=23;
	tut=&ogrenci1;
	printf("%s %s %d",tut->isim,tut->soyisim,tut->numara);
	}
