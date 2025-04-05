#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
 
int main()
{
 int i,j,n,m;
 int sat,sut,enb;
 int mat[10][10];
 printf("Satir sayisi : ");
 scanf("%d",&n);
 printf("Sutun sayisi : ");
 scanf("%d",&m);
 for(i=1;i<=n;i++)
 for(j=1;j<=m;j++)
 {
                  printf("%d . satir , %d sutun elemani : ", i,j);
                  scanf("%d",&mat[i][j]);
                  
 }
                  enb = mat[1][1];
                  sat = 1;
                  sut = 1;
                  for(i=1;i<=n;i++)
                    
                   for(j=1;j<=m;j++)
                    {
                                     if(enb < mat[i][j])
                                     {
                                             enb = mat[i][j];
                                             sat=i;
                                             sut=j;
                                     }
                                     
                    }
                  printf("En buyuk sayi : %d\n", enb);
                  printf("Satir : %d\n ",sat);
                  printf("Sutun : %d\n ",sut);
                  
                  getch();
}
 
