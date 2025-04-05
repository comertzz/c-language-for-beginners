#include<stdio.h>
int main()
{
	int x=1,toplam=0,y;
	while(x<=10){
		y=x*x;
		printf("%d\n",y);
		toplam+=y;
		++x;
	}
	printf("toplam %d",toplam);
	return 0;
}
