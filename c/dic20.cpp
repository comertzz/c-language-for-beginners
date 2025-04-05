#include<stdio.h>
int fakto(int dicle){
	int i,fact;
	for(i=dicle;i>0;i--){
		fact*=i;
	}
	return fact;
}
int main()
{
	int dicle;
	printf("sayi girr:\n");
	scanf("%d",&dicle);
	printf("%d",fakto(dicle));
	
}
