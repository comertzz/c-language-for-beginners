
#include<stdio.h>
int main()
{
	float ortalama;
	int sayici,nott,toplam;
    toplam=0;
    sayici=0;
    printf("notu giriniz(cikis icin -1):");
    scanf("%d",&nott);
    while(nott!=-1){
    	toplam=toplam+nott;
    	sayici=sayici+1;
    	printf("notu giriniz(cikis icin -1):");
    	scanf("%d",&nott);
	}
    if (sayici!=0){
    	ortalama=(float)toplam/sayici;
    	printf("sinif ortalamasi %.2f",ortalama);
	}
	else
	printf("hic not girilmemistir\n");
	return 0;
	
}

