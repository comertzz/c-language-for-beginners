#include<stdio.h>
int main(){
int gecenler=0,kalanlar=0,ogrenci=1,sonuc;
while(ogrenci<=10){
	printf("sonucu girin(1=gecti,2=kaldi:\n");
	scanf("%d",&sonuc);
if (sonuc==1)
gecenler=gecenler+1;
else
kalanlar=kalanlar+1;
ogrenci=ogrenci+1;
}
printf("gecenler %d\n",gecenler);
printf("kalanlar %d\n",kalanlar);
if(gecenler>8)
	printf("yuksek basarili sinif");
	else
	printf("dusuk basarili sinif");

	
}
