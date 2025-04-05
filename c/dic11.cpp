#include<stdio.h>
int main()
{
	float yeniBakiye,hesapNo,bakiye,toplamHarcama,aktarilanKredi,krediLimiti;
	printf("hesap no giriniz:\n");
	scanf("%f",&hesapNo);
	if(hesapNo==(-1)){
	printf("cikis yaptiniz.");	
	}
	else{
	printf("ilk bakiye giriniz:\n");
	scanf("%f",&bakiye);
	printf("toplam harcama giriniz");
	scanf("%f",&toplamHarcama);
	printf("aktarilan kredi giriniz:\n");
	scanf("%f",&aktarilanKredi);
	printf("izin verilen kredi limiti:\n");
	scanf("%f",&krediLimiti);
	yeniBakiye=(bakiye+toplamHarcama-(aktarilanKredi));
	if(yeniBakiye>krediLimiti){
		printf("kredi limiti asildi.\n haciz gelicek");
	}
	else{
		printf("kredi limiti asilmadi");
	}
	
}
}
