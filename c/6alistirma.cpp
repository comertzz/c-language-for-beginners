#include<stdio.h>
#define BOYUT 5
int main(){
	int a[BOYUT]={3000,4000,5000,6000,7000};
	int i,satis1,satis2,satis3,satis4,satis5,kazanc1,kazanc2,kazanc3,kazanc4,kazanc5;
	for(i=0;i<=BOYUT-1;i++){
		printf("%d\n",a[i]);
	}
	printf("satislari giriniz\n");
	scanf("%d",&satis1);
	scanf("%d",&satis2);
	scanf("%d",&satis3);
	scanf("%d",&satis4);
	scanf("%d",&satis5);
	kazanc1+=(a[1]+satis1)*9/100;
	kazanc2+=(a[2]+satis2)*9/100;
	kazanc3+=(a[3]+satis3)*9/100;
	kazanc4+=(a[4]+satis4)*9/100;
	kazanc5+=(a[5]+satis5)*9/100;
	printf("kazanclar \n%d\n%d\n%d\n%d\n%d\n",kazanc1,kazanc2,kazanc3,kazanc4,kazanc5);
}
