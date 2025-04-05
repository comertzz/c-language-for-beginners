#include<stdio.h>
int maks(int a,int b,int c){
	int max;
	if(a>max){
		max=a;
	}
	if(b>max){
		max=b;
	}
	if(c>max){
		max=c;
}
	return max;         	
}
int main(){
	int a,b,c;
	printf("a sayisini gir.");
	scanf("%d",&a);
	printf("b sayisini gir.");
	scanf("%d",&b);
	printf("c sayisini gir.");
	scanf("%d",&c);
	printf("max %d",maks(a,b,c));
}
