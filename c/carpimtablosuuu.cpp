#include<stdio.h>
int main(){
	int sonuc=1;
	int i;
	int j;
	for(i=0;i<=10;i++){
		for(j=0;j<=10;j++){
			sonuc=i*j;
			printf("%d ",sonuc);
		}
		printf("\n");
	}
}
