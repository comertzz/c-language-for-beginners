#include<stdio.h>
int main()
{
	int vol;
	printf("ses seviyesini giriniz:\n");
	scanf("%d",&vol);
	if(vol>0 && vol<33){
		printf("|>");
	}
	else if(vol>32 && vol<66){
		printf("|>>");
	}
	else if(vol>65 && vol<=100){
		printf("|>>>");
}                           	
}


