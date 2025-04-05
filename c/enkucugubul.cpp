#include<stdio.h>
#include<stdlib.h>
double enkucugubul(double sayi){
	double min;
	min = sayi;
	if(sayi<min){
		sayi=min;
	}
	return min;
	
	}
	int main(){
		double sayi;
		int i;
		int adet;
		printf("kac sayi girecen canim:\n");
		scanf("%d",&adet);
		for(i=0;i<adet;i++){
			printf("sayilari gir:\n");
			scanf("%d",&sayi);
		}
		printf("en kucuk %d",enkucugubul(sayi));
	}

