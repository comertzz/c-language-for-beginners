#include<stdio.h>
float ucretHesapla(float araba,float saat){
	float ucret;
	if(saat<=3){
		ucret=2;
	}
	if(saat>3 && saat<24){
		ucret=2+0.5*saat;
	}
	if(saat==24){
		ucret=10;
	}
	if(saat>24){
		printf("cik lan artik");
	}
	return ucret;
}
int main(){
	float araba,saat;
	printf("arac no gir");
	scanf("%f",&araba);
	printf("saat gir.");
	scanf("%f",&saat);
	printf("ucret %f",ucretHesapla(araba,saat));
}
