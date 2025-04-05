#include <stdio.h>
int gizem(int a,int b){
	if (b<0)
	return 0;
if(b==1)
	return a;
else
return a+gizem(a,b-1);
}
int main()
{
	int x,y;
	printf("iki tamsayi girin:\n");
	scanf("%d%d",&x,&y);
	printf("sonuc %d\n",gizem(x,y));
	return 0;
}

