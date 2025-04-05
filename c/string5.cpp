#include<stdio.h>
int main(){
	int i;
	int notu;
	float ort=0;
	char isim[20];
	char soyisim[20];
	for(i=0;i<5;i++){
		printf("isim giriniz:");
		scanf("%s",isim);
		printf("soyisim giriniz:");
		scanf("%s",soyisim);
		printf("ogrenci notu giriniz.");
		scanf("%d",&notu);
		printf("%s ",isim);
		printf("%s\t",soyisim);
		printf("%d\n",notu);
		ort+=notu;
}	
		printf("ort %f",ort/5);



}
