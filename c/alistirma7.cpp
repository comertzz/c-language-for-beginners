#include<stdio.h>
#define BOYUT 10
int main()
{
	int degerler[BOYUT];
	int i;
	for(i=0;i<BOYUT;i++){
		degerler[i]=i+1;
		if((i+1)%2==0)
		printf("%d\t",degerler[i]);

}
}
