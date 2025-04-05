#include<stdio.h>
int main()
{
	int dizi[5][5]={{1,2,3,4,5},{10,9,8,7,6},{11,12,13,14,15},{20,19,18,17,16},{21,22,23,24,25}};
	int i,j;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d ",dizi[i][j]);
		}
		printf("\n");
	}
}
