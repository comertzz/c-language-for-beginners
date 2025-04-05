#include<stdio.h>
int main()
{
	int urunNo;
	float fiyat,satisMiktari,sonuc;
	printf("urunno gir");
	scanf("%d",&urunNo);
	switch(urunNo){
		case 1: fiyat=2.98;
		printf("satis miktari gir.\n");
	scanf("%f",&satisMiktari);
	sonuc=fiyat*satisMiktari;
	printf("sonuc %f",sonuc);
		break;
		case 2: fiyat=4.50;
		printf("satis miktari gir.\n");
	scanf("%f",&satisMiktari);
	sonuc=fiyat*satisMiktari;
	printf("sonuc %f",sonuc);
		break;
		case 3: fiyat=9.98;
		printf("satis miktari gir.\n");
	scanf("%f",&satisMiktari);
	sonuc=fiyat*satisMiktari;
	printf("sonuc %f",sonuc);
		break;
		case 4: fiyat=4.49;
		printf("satis miktari gir.\n");
	scanf("%f",&satisMiktari);
	sonuc=fiyat*satisMiktari;
	printf("sonuc %f",sonuc);
		break;
		case 5: fiyat=6.87;
		printf("satis miktari gir.\n");
	scanf("%f",&satisMiktari);
	sonuc=fiyat*satisMiktari;
	printf("sonuc %f",sonuc);
		break;
		default: printf("oyle bi urun yok");
		break;
	}
	
}
