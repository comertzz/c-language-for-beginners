#include<stdio.h>
int main(){

int n1,fact1=1;
printf("faktoriyel istediginiz sayiyi giriniz:\n");
scanf("%d",&n1);
while(n1!=0){
	fact1*=n1;
	n1--;
}
printf("faktoriyel=%d\n",fact1);
return 0;
}
