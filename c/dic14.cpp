#include<stdio.h>
int main()
{
	int i;
	printf("n\t10n\t100n\t1000n\n");
	for(i=1;i<=10;i++){
		printf("%d\t%d\t%d\t%d\n",i,10*i,100*i,1000*i);
	}
}
