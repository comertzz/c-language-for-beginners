#include<stdio.h>
int main(){
	int dizi[3][4];
	int diziel;
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			scanf("%d",&dizi[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("%d",dizi[i][j]);
		}
		printf("\n");
	}
	
}


