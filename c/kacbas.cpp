#include <stdio.h>
 
int main()
{
    int sayi;
    int yedi=0;
    
    printf("Sayi giriniz: ");
    scanf("%d",&sayi);
    
        if(sayi%10==7)
        {
        	yedi++;
		}
    while(sayi/10!=0){
    	sayi=sayi/10;
    	if(sayi%10==7)
    	yedi++;
	}
		  
	
    
	printf("yedi sayisi %d",yedi); 
}
