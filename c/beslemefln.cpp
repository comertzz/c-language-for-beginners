#include<stdio.h>
#include<stdlib.h>
int main(){
	int i;
	int besleme;
	printf("beslemeyi giriniz:\n");
	scanf("%d",&besleme);
	srand(besleme);	
	for(i=0;i<=10;i++){
		printf("%10d",1+(rand()%6));
		if(i%5==0)
		printf("\n");
	}
	return 0;
}
