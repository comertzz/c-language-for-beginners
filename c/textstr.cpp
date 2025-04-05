#include <stdio.h>
#include <stdlib.h>

struct yap {
  char cdizi1[20]; // �sim
  char cdizi2[20]; // Soyad�
  int id;          // Ya��
} ydizi[5];

char* bg_fgets(char *str, int count);

int main(void)
{
  FILE *fp;
  int id;
  char cdizi[20];

  if ((fp = fopen("deneme.txt", "wb")) == NULL) {
      printf("Dosya a��lamad�!\n");
      exit(1);
  }

  for (id=0; id<5; id++) {
       printf("Ad�: ");
       bg_fgets(ydizi[id].cdizi1, 20);
       printf("Soyad�: ");
       bg_fgets(ydizi[id].cdizi2, 20);
       printf("Ya��: ");
       bg_fgets(cdizi, 20);
       ydizi[id].id = (int) atoi(cdizi);

       printf("\n");
  }

  fwrite(ydizi, sizeof ydizi, 1, fp);
  fclose(fp);

  if ((fp = fopen("deneme.txt", "rb")) == NULL) {
      printf("Dosya a��lamad�!\n");
      exit(1);
  }

  fread(ydizi, sizeof ydizi, 1, fp);

  for (id=0; id<5; id++) {
       printf("%-20s %-20s %-2d\n", ydizi[id].cdizi1, ydizi[id].cdizi2, ydizi[id].id);
  }

  fclose (fp); // Dosya kapatma

  return 0;
}

char* bg_fgets(char *str, int count)
{
  const char *s;

  fgets(str, count, stdin);

  for (s=str; *s && *s!='\n'; ++s);

  if ((s-str) < (count-1)) *(str+(s-str)) = '\0';

  return str;
}
