#include<stdio.h>
int i=123;
int main(){
	printf("%d\n",i);
	{
		int i=456,j=789;
		printf("%d\n%d\n",i,j);
		{
			int i=246;
			printf("%d\n%d\n",i,j);
		}
		printf("%d\n",i);
	}
	printf("%d\n",i);
	return 0;
}
