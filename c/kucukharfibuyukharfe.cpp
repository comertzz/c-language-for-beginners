#include <stdio.h>
//ASCII TABLO KULLANARAK B�Y�K YA DA K����E D�N��T�RME
 
int main() {
    
    char harf[100];
    int i = 0, x;
    
    printf("Bir kelime giriniz: ");
    gets(harf);
    
    int fark = 'a' - 'A';
    
    while (harf[i] != '\0') {
        
        if (harf[i] >= 'A' && harf[i] <= 'Z') {
            harf[i] += fark;
        } else if (harf[i] >= 'a' && harf[i] <= 'z') {
            harf[i] -= fark;
        }
        printf("%c", harf[i]);
        i++;
    }
 
    return 0;
}
