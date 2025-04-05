#include<stdio.h>
int main()
{
	float faiz,anapara,oran,faizucreti,gunler;
	printf("anaparayi giriniz:\n");
	scanf("%f",&anapara);
	if(anapara==(-1)){
		printf("cikis yaptiniz.");
	}
	else{
		printf("faiz orani girin.\n");
		scanf("%f",&oran);
		printf("gun giriniz.\n");
		scanf("%f",&gunler);
		faizucreti=anapara*oran*gunler/365;
	}
	printf("%f",faizucreti);
}
