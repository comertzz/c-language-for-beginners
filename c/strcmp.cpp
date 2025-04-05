#include <stdio.h>
#include <string.h>

int main( void )
{
    const char *cp1 = "Bilgisayar";
    const char *cp2 = "Bilgileri";
    int ret;

    ret = strcmp(cp1, cp2);

    if(ret<0) printf("cp1 karakter dizisi cp2 karakter dizisinden kucuktur!");
    else if(ret>0) printf("cp2 karakter dizisi cp1 karakter dizisinden kucuktur!");
    else printf("cp1 karakter dizisi cp2 karakter dizisine esittir!");

    return 0;
}


