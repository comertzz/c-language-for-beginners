#include<stdio.h>
int main(){
	int urunNo,satisMiktari,kazanc;
	kazanc=urunNo*satisMiktari;
	printf("urunler\n 1=urun1\n 2=urun2\n 3=urun3\n 4=urun4\n 5=urun5\n");
    printf("urunu seciniz:\n");
	scanf("%d",&urunNo);
	switch(urunNo){
		case 1:
			printf("satisMiktarini giriniz :\n");
			scanf("%d",&satisMiktari);
			kazanc=satisMiktari*3;
			printf("kazanciniz:%d",kazanc);
			break;
		case 2:
			printf("satisMiktarini giriniz :\n");
			scanf("%d",&satisMiktari);
			kazanc=satisMiktari*4;
			printf("kazanciniz:%d",kazanc);
			break;
		case 3:
			printf("satisMiktarini giriniz :\n");
			scanf("%d",&satisMiktari);
			kazanc=satisMiktari*5;
			printf("kazanciniz:%d",kazanc);
			break;
		case 4:
			printf("satisMiktarini giriniz :\n");
			scanf("%d",&satisMiktari);
			kazanc=satisMiktari*6;
			printf("kazanciniz:%d",kazanc);
			break;
		case 5:
			printf("satisMiktariniz giriniz :\n");
			scanf("%d",&satisMiktari);
			kazanc=satisMiktari*7;
			printf("kazanciniz:%d",kazanc);
			break;
		default :
			printf("boyle bir urun yok");
			}
}
