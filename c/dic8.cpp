#include<stdio.h>
int main()
{
	int x,y,i,kuvvet;
	scanf("%d",&x);
	scanf("%d",&y);
	i=1;
	kuvvet=1;
	kuvvet*=x;
	y++;
	if(y==x){
		printf("x eþittir y");
	}
	if(y<x){
		printf("y kucuktur x");
		
	}
	printf("%d",kuvvet);
}

