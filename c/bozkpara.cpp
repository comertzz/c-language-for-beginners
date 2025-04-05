#include<stdio.h>
int main()
{
	int i,para;
	int bozuk=0;
	printf("parayi gir\n");
	scanf("%d",&para);
	for(i=para;i>0;i--)
	{
		if(para%i==0)
		{
			bozuk++;
		}
			
	}
	printf("%d",bozuk);
}
