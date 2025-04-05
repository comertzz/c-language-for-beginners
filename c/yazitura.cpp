#include<stdio.h>
#include<stdlib.h>
int yazitura(int yazi,int tura){
	int i,para;
	para=1+rand()%2;
	for(i=0;i<=10;i++){
		if(para==yazi){
			yazi++;
		}
		if(para==tura){
			tura++;
		}
}
return para;
	}
	int main(){
		int yazi,tura;
 printf("olasilik %d",yazitura(yazi,tura));
		
	}
