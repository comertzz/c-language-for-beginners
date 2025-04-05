#include<stdio.h>
int main()
{
	int i;
	int dizi[3]={1,3,2};

	
	if(dizi[1]<dizi[2]){
		dizi[1]=dizi[2];
	}
	else if(dizi[2]<dizi[3]){
		dizi[2]=dizi[1];
	}
	else if(dizi[0]<dizi[2]){
		dizi[1]=dizi[0];
	}
		for(i=0;i<3;i++){
		printf("%d ",dizi[i]);
		
}
}
