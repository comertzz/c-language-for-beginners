#include<stdio.h>
int mystrlen(char a[]){
	int k=0;
	int uzunluk=0;

	while(1){
		if(a[k]=='\0'){
			break;
		}
		k++;
		uzunluk++;
		
		
	}
	return uzunluk;
}
int main(){
	char a[]="comert";
	printf("%d",mystrlen(a));
	
	}
