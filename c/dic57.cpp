#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int yazitura(int n){
	srand(time(NULL));
	int i,a,yazi,tura;
	for(i=0;i<=n;i++){
		a=1+rand()%2;
		if(a==1){
			printf("tura\t");
	}
		if(a==2){
			printf("yazi\t");
	}
}
	
}
int main(){
	int para;
	int n;
	printf("kac defa atmak istrersin");
	scanf("%d",&n);
	printf("%s",yazitura(n));
}
