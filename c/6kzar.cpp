#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define BOYUT 7
int main()
{
	int yuz,zarAt,frekans[BOYUT]={0};
	srand(time(NULL));
	for(zarAt=1;zarAt<=6000;zarAt++){
		yuz=1+rand()%6;
		++frekans[yuz];
	}
	printf("%s%17s\n","YUZ","Frekans");
	for(yuz=1;yuz<=BOYUT-1;yuz++)
		printf("%3d%17d\n",yuz,frekans[yuz]);
		return 0;
}
