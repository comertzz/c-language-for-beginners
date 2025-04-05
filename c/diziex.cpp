#include<stdio.h>
int main()
{
	int dizi[3]={2,5,7};
	int i;
	for(i=0;i<3;i++){
		printf("%d ",dizi[i]);
	}
	printf("\n");
	for(i=2;i>=0;i--){
		printf("%d ",dizi[i]);
	}
}
