#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int i;
	srand(time(NULL));
	for(i=0;i<2;i++){
		printf("%d ",1+rand()%6);
	}
}
