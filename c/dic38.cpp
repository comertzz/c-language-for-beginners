#include<stdio.h>
int main()
{
	int i,n,j;
	printf("kenar uzunlugu gir:");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		for(j=0;j<=n;j++){
			if(i==0 || j==0 || i==n || j==n){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
