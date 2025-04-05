#include<stdio.h>
int main()
{
	int dizi[10][3];
	int i,j;
	for(i=0;i<10;i++){
		printf("dizi elemani gir:\n");
		for(j=0;j<3;j++){
					scanf("%d",dizi[i][j]);

			printf("%d ",dizi[i][j]);
		}
		printf("\n");
	}
}
