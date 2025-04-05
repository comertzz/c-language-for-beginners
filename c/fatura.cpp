#include<stdio.h>
int main(){
	int dak;
	double fatura=0;
	printf("konustugun dakika gir:");
	scanf("%d",&dak);
	if(dak<=100){
		fatura+=200;
	}
	if(dak>100 && dak<=150){
		fatura+=(dak-100)*0.6+200;
	}
	if(dak>150 && dak<=200){
		fatura+=(dak-150)*0.5+230;
	}
	if(dak>200){
		fatura+=(dak-200)*0.4+255;
	}
	printf("faturanız %f",fatura);
}
