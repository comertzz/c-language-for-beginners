#include<stdio.h>
#define BOYUT 10
int main()
{
	int a[BOYUT] ={2,6,4,8,12,10,14,20,22,18};
	int i,tur,tut;
	printf("veriler orijinal sirasinda:\n");
	for(i=0;i<=BOYUT-1;i++){
	printf("%4d",a[i]);
			
}
	for(tur=1;tur<=BOYUT-1;tur++){
	for(i=0;i<=BOYUT-2;i++){
			if(a[i]>a[i+1]){
			tut=a[i];
			a[i]=a[i+1];
			a[i+1]=tut;
			printf("\nVeriler artan sirada:\n");
	for(i=0;i<=BOYUT-1;i++)
	printf("%4d",a[i]);
	printf("\n");
					}
						}
                       	}
                      	}
