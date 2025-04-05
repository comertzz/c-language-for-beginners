#include <stdio.h>

struct yap {
  char cdizi1[20]; // Adý
  char cdizi2[20]; // Soyadý
  char cdizi3[20]; // Memleketi
  char cdizi4[20]; // Tahsili
  int id;          // Yaþý
} yd;

char* bg_fgets(char *str, int count);

int main(void)
{
  printf("Adi: ");
  bg_fgets(yd.cdizi1, 20);
  printf("Soyadi: ");
  bg_fgets(yd.cdizi2, 20);
  printf("Memleketi: ");
  bg_fgets(yd.cdizi3, 20);
  printf("Tahsili: ");
  bg_fgets(yd.cdizi4, 20);
  printf("Yasi: ");
  scanf("%d", &yd.id);

  printf("%s %s %s %s %d", yd.cdizi1, yd.cdizi2, yd.cdizi3, yd.cdizi4, yd.id);

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

