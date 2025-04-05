#include<stdio.h>
int main()
{

int dizi[10];
int i,j;
for(i=0;i<10;i++){
	printf("%d. sayiyi giriniz\n",i+1);
	scanf("%d ",&dizi[i]);
}
for(j=0;j<10;j++){
	printf("%d ",dizi[j]);
}
}
