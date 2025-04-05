#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int x;
	srand(time(NULL));
	for(x=1;x<=50;x++){
		printf("%10d",1+rand()%6);
		if(x%5==0){
			printf("\n");
		}
	}
}
