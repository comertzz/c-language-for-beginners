#include<stdio.h>

int main(){

int perm,n1,n2,fact1=1,fact2=1;
printf("faktoriyel istediginiz sayiyi giriniz:\n");
scanf("%d",&n1);
while(n1!=0){
	fact1*=n1;
	n1--;
}
printf("%d\n",fact1);
printf("faktoriyel istediginiz ikinci sayiyi giriniz:\n");
scanf("%d",&n2);
while(n2!=0){
	fact2*=n2;
	n2--;
}
printf("%d\n",fact2);
perm=fact1/fact2;
printf("perm %d",perm);
return 0;
}
