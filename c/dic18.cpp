#include<stdio.h>
int main()
{
	float a,b,c;
	printf("a gir.\n");
	scanf("%f",&a);
	printf("b gir.\n");
	scanf("%f",&b);
	printf("c gir.\n");
	scanf("%f",&c);
	if(a+b>c && a-b<c){
	printf("ucgen olabilir.");
	}
	else if(a+c>b && a-c<b){
	printf("ucgen olabilir.");
	}
	else if(c+b>a && c-b<a){
		printf("ucgen olabilir.");
	}
	else {
		printf("ucgen olamaz");
	}
	
}
