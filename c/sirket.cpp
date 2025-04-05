#include<stdio.h>
int main(){
	int mudur,vardiya,komisyon,parca,maas,kademe,saat,ucret;
	printf("Kademeler\n 1=Mudur\n 2=Vardiyali Isci\n 3=Komisyon Iscýsý\n 4=Parca Iscisi\n");
	printf("Kademenizi Seciniz:\n");
	scanf("%d",&kademe);
	maas=ucret*saat;
	switch(kademe){
		case 1:
			printf("Kac saat calistiginizi giriniz:\n");
			scanf("%d",&saat);
			if(saat>40){
				maas+=saat*500/5*100;
			}
			else
			maas=saat*500;
			printf("Bu ayki maasiniz:%d\n",maas);
			break;
		case 2:
			printf("Kac saat calistiginizi giriniz:\n");
			scanf("%d",&saat);
			if(saat>40){
				maas+=saat*400/5*100;
			}
			else
			maas=400*saat;
			printf("Bu ayki maasiniz:%d\n",maas);
			break;
		case 3:
			printf("Kac saat calistiginizi giriniz:\n");
			scanf("%d",&saat);
			if(saat>40){
				maas+=saat*300/5*100;
			}
			else
			maas=300*saat;
			printf("Bu ayki maasiniz:%d\n",maas);
			break;
		case 4:
			printf("Kac saat calistiginizi giriniz:\n");
			scanf("%d",&saat);
			if(saat>40){
				maas+=saat*200/5*100;
			}
			else
			maas=200*saat;
			printf("Bu ayki maasiniz:%d\n",maas);
			break;
		default :
			printf("Bilinmeyen Kademe");
	}
}
