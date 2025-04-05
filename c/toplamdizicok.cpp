#include<stdio.h>
int main()
{
	int dizi[3][3]={{9,8,7},{6,5,4},{3,2,1}};
	int i,j,toplam;
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			printf("%d",dizi[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			toplam+=dizi[i][j];
		}
		printf("%d ",toplam);
		toplam=0;
	}
}
