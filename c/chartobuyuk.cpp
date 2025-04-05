#include<stdio.h>
char toBuyuk(char c){
	int fark='a'-'A';
	
	if(c>='a'&&c<='z'){
		c-=fark;
		return c;
	}
	else{
		printf("dalga mi gecisin");
	}
}
int main(){
	char c;
	scanf("%c",&c);
	printf("%c",toBuyuk(c));
}
