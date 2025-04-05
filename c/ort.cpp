#include<stdio.h>
double ortalama(int a,int b, int c){
	double ort;
	ort=(a+b+c)/3;
	return ort;
}
int main(){

int a,b,c;
printf("a yi giriniz:\n");
scanf("%d",&a);
printf("b yi giriniz:\n");
scanf("%d",&b);
printf("c yi giriniz:\n");
scanf("%d",&c);
printf("ortalama %f",ortalama(a,b,c));
}
