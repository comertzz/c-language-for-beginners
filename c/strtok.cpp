#include <stdio.h>
#include <string.h>

int main( void )
{
    char cdizi[] = "aycomputer";
    const char *delp;

    printf ("Karakter dizisi: %s\n", cdizi);

    /* Sýnýrlayýcý karakterlerin bulunduðu dizindeki karakterlerden herhangi
    birinin bulunmadýðý ilk karakterin bellek adresini geri döndürür. */
    delp = strtok (cdizi, " ay");


    while (delp != NULL)  {
      printf ("%say", delp);
      delp = strtok (NULL, " ay");
    }

    return 0;
}

