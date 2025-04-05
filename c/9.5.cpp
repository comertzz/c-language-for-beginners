#include<stdio.h>
int main(){
	printf("%-10d\n",10000);
	printf("%*.*lf\n",8,3,1024.98765);
	printf("%#o\n%#X\n%e\n",17,17,1008.83689);
	printf("%ld\n%+ld\n",1000,1000);
	printf("%10.2E\n",444.93738);
	printf("%10.2g\n",444.93738);
	printf("%d\n",10.987);
	char s[10];
	scanf("%c",s[7]);
}
