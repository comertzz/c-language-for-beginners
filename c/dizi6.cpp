#include<stdio.h>
#define boyut 10
int main(){
	int dizi[boyut];
	int i;
	int min;
	for(i=0;i<boyut;i++){
		scanf("%d",&dizi[i]);
	}
	for(i=0;i<boyut;i++){
		printf("%d ",dizi[i]);
	}
	min=dizi[i];
	for(i=0;i<boyut;i++){
		if(dizi[i]<min){
			min=dizi[i];
		}
	}
	printf("\nmin deger %d",min);
}
