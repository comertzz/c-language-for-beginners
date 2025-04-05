#include<stdio.h>
char toBuyuk(char c){
	int fark;
	fark='a'-'A';
	if(c>='a'&&c<='z'){
		c-=fark;
		return c;
	}
}
int main(){
	char c;
	scanf("%c",&c);
	printf("%c",toBuyuk(c));
}

