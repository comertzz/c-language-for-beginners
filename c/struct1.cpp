#include<stdio.h>
struct Student{
	char isim[15];
	char soyisim[15];
	int numara;
	int yas;
};
int main(){
	struct Student ahmet={"ahmet","gedikli",135,2};
	printf("%s %s %d %d",ahmet.isim,ahmet.soyisim,ahmet.numara,ahmet.yas);
	}
