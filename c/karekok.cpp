#include<stdio.h>
#include<math.h>
int maks(int,int,int);
int main(){
	int a,b,c;
	printf("3 tam sayi giriniz:\n");
	scanf("%d%d%d",&a,&b,&c);
	printf("en buyuk sayi %d",maks(a,b,c));
	
	return 0;
}

int maks(int x,int y, int z){
	int maks=x;
	if(y>maks){
		maks=y;
		
	}
	if(z>maks)
 		maks=z;
	return maks;
}
