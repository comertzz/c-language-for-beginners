#include <stdio.h>

int main()
{
   	int sayi, kare, kup;
   	sayi= 1;
   	printf("Sayi \t Karesi \t Kupu \n");
	while (sayi<=10) {
		kare= sayi*sayi;
		kup= kare*sayi;
		printf("%d \t %d \t %d \n", sayi, kare, kup);
		sayi +=1;
	}


    return 0;
}

