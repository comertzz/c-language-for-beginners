#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
int main()
{   
srand(time(NULL));
    int i,yazi=1,tura=0,para,turasayisi=0,yazisayisi=0;
for(i=1;i<=100000;i++)
    {
        para=rand()%2;
        if(para==yazi)
        yazisayisi++;
        if(para==tura)
        turasayisi++;
    }
    printf("%d kez tura %d kez yazi gelmistir. \n yazi gelme olasiligi %f \n  tura gelme olasiligi %fdir",turasayisi,yazisayisi,(float)yazisayisi/100000,(float)turasayisi/100000);
    getch();
 return 0;
}
