#include<stdio.h>
int main()
{
	float satis,maas;
	printf("satis tutari giriniz:");
	scanf("%f",&satis);
	maas=200+(satis*0.09);
	if(satis==(-1)){
		printf("cikis yaptiniz:");
	}
	else{
		printf("maas %f",maas);
	}
	
}
