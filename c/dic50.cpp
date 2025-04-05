#include<stdio.h>
int katiMi(int a,int b){
	if(a%b==0){
		return 1;
	}
	else if(b%a==0){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	int a,b;
	printf("a gir.");
	scanf("%d",&a);
	printf("b gir.");
	scanf("%d",&b);
	printf("%d",katiMi(a,b));
}
