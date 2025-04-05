#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void toilkharfibuyuk(char a[200]){
	int c=1;
	int i;
	for(i=0;a[i]!=NULL;i++){
		if(c==1 && a[i]!=' '){
			a[i]=toupper(a[i]);
			c=0;	
		}

	}
			puts(a);
}
int main(){
	char a[200];
	gets(a);
	toilkharfibuyuk(a);
	
}
