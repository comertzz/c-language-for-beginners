#include<stdio.h>
#include<math.h>
int hipohesap(int kenar1,int kenar2){
	float hipo;
	hipo=pow(kenar1,2)+pow(kenar2,2);
	return hipo;
}
int main(){
	float kenar1,kenar2;
	printf("kenar 1 gir");
	scanf("%f",&kenar1);
	printf("kenar 2 gir");
	scanf("%f",&kenar2);
	printf("%f",sqrt(hipohesap(kenar1,kenar2)));
}
