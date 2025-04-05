#include <stdio.h>

int main(void)
{
  int idizi[10];
  int id;

  // Dizinin elemanlarýna 1-10 arasýndaki deðerleri sýra ile atama
  for (id=0; id<10; id++) {
       idizi[id] = id+1;
  }

  // Dizi deðerlerini ekrana yazma
  for (id=0; id<10; id++) {
       printf("%d ", idizi[id]);
  }

  return 0;
}
