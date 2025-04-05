#include<stdio.h>
int kare(int a){
	int i,j;
	for(i=1;i<=a;i++){
		for(j=1;j<=a;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
int main(){
	int a;
	printf("kenar sayisini gir.");
	scanf("%d",&a);
	printf(" ",kare(a));
}
