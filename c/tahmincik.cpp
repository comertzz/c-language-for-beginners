#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
    int sayi, deneme=0;
    srand (time(NULL));
    int rastgele = rand() % 100;
    //printf("Atanan  sayi : %d\n", rastgele);
    
    do{
        printf("0 la 100 arasinda Sayi giriniz : ");
        scanf("%d", &sayi);
        
        if(sayi < rastgele){
            printf("Sayiyi buyultun.\n");
        }
        else if(sayi > rastgele){
            printf("Sayiyi kucultun.\n");
        }
        deneme++;
    }
    while(sayi != rastgele);
    
    printf("\nTebrikler %d. denemede bildiniz!!", deneme);
}
