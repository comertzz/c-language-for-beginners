#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=0;i<=10;i++){
		for(j=0;j<=10-i;j++){
			printf(" ");
			for(k=0;k<=i;k++){
				printf("*");
			}
		}
		printf("\n");
	}
}
