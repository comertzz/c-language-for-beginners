#include <stdio.h>
#include <string.h>

int main( void )
{
    char cdizi[] = "aycomputer";
    const char *delp;

    printf ("Karakter dizisi: %s\n", cdizi);

    /* S�n�rlay�c� karakterlerin bulundu�u dizindeki karakterlerden herhangi
    birinin bulunmad��� ilk karakterin bellek adresini geri d�nd�r�r. */
    delp = strtok (cdizi, " ay");


    while (delp != NULL)  {
      printf ("%say", delp);
      delp = strtok (NULL, " ay");
    }

    return 0;
}

