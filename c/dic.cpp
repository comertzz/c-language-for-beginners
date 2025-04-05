#include<stdio.h>
#include<stdlib.h>

int main () {
	int sayi1,sayi2;
	printf("lutfen sayi giriniz:");
	scanf("%d%d",&sayi1,&sayi2);
	
	if(sayi1==sayi2) {
		printf("%d ve %d birbirine esit",sayi1,sayi2);
	}
	if(sayi1>sayi2) {
		printf("%d %d'den buyuktur",sayi1,sayi2);
	}
	if(sayi1<sayi2) {
		printf("%d %d'den kucuktur",sayi1,sayi2);
	}

}
