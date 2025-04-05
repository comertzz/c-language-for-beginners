#include<stdio.h>
int main()
{
	int hesapNo,sifre,krediLimiti,GuncelBakiye;
	printf("lutfen hesapno giriniz:");
	scanf("%d",&hesapNo);
	printf("sifrenizi giriniz:");
	scanf("%d",&sifre);
	if(sifre==2323){
	printf("krediLimitini giriniz.");
	scanf("%d",&krediLimiti);
	GuncelBakiye=krediLimiti/2;
	printf("guncel bakiyeniz %d",GuncelBakiye);
}
	else{
		printf("\nyanlis sifre.");
	}

}
