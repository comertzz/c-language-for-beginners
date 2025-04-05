#include<stdio.h>
int usAlma(int us, int taban){
	int i,sonuc=1;
	for(i=1;i<=us;i++){
		sonuc*=taban;
		
	}
	return sonuc;
}
int main(){

int us,taban;
printf("taban gir:\n");
scanf("%d",&taban);
printf("us gir:\n");
scanf("%d",&us);
printf("%d",usAlma(us,taban));
}
