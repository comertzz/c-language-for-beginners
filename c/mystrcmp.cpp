#include<stdio.h>
#include<string.h>
int my_strcmp(char a[],char b[]){
	int i=0;
	int x;
	for(i=0;i<strlen(a);i++){
		if(a[i]==b[i]){
			x=0;
			
		}
		else{
				return -1;
						}
	}
	return x;
	
	
	
}
int main(){
	char a[]="kazilim";
	char b[]="cazilim";
	
	int k=my_strcmp(a,b);
	printf("%d",k);
}
