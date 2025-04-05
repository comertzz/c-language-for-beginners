#include<stdio.h>
int enKucuk(int a,int b,int c){
	int enkucuk;
	enkucuk=a;
	if(enkucuk>a){
		enkucuk=a;
	}
	if(enkucuk>b){
		enkucuk=b;
	}
	if(enkucuk>c){
		enkucuk=c;
	}
	return enkucuk;
}
int main(){
	int a,b,c;
	printf("a gir");
	scanf("%d",&a);
	printf("b gir");
	scanf("%d",&b);
	printf("c gir");
	scanf("%d",&c);
	printf(" en kucuk %d",enKucuk(a,b,c));
}
