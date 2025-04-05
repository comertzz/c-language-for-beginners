#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *f;
	int i=0;
	int k=0;
	char ch;
	f=fopen("deneme.txt","r");
	while(feof(f)>=10 && feof(f)<=0){
		ch=getc(f);
		if(ch=='\n'){
			k++;
					}
			i++;	
				
	}
	printf("satir=%d karakter=%d" ,k+1,i+1);
	system("pause");
	return 0;
	
}
