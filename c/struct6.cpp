#include<stdio.h>
#include<stdlib.h>


	struct kayit
	{
		char ad[20];
		int no;
		int sinif;
		float ort;
	};
	struct kayit ogr;
	
int main(){
	printf("ad soyad:");
	scanf("%s",&ogr.ad);
	printf("numara:");
	scanf("%d",&ogr.no);
	printf("sinif:");
	scanf("%d",&ogr.sinif);
	printf("ort:");
	scanf("%f",&ogr.ort);
	printf("%s\n",ogr.ad);
	printf("%d\n",ogr.no);
	printf("%d\n",ogr.sinif);
	printf("%f\n",ogr.ort);
}
