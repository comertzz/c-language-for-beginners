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
}
char* my_strcpy(char a[],char b[]){
	int i;
	for(i=0;i<mystrlen(a);i++){
		a[i]=b[i];
		
		
	}

	return a;
}
int main(){
	char a[]="comerttttt";
	char b[]="muhammet";
	my_strcpy(a,b);
	printf("%s",a);
}
