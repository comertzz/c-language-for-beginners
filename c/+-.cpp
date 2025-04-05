#include <stdio.h>

int main()
{
    int sayi, i, enbuyuk=0;
    i=0;
    while(i<10){
        printf("Sayi:");
        scanf("%d", &sayi);
        if (sayi>enbuyuk){
            enbuyuk=sayi;
        }
        
        i+=1;

    } 
    
    printf("%d", enbuyuk);


	return 0;
}
