#include<stdio.h>

int main( void )

{
    int xx;
    printf("* * * Birinci döngü... * * *\n");
    for (xx = 5; xx < 15; xx = xx + 1)
    {
        if (xx == 8 )
         break;
        printf("Break dongusunun icinde, xx in degeri simdi %d\n", xx);
       
    }
    printf("* * * Ikinci dongu... * * * \n");
    for(xx = 5; xx < 15; xx = xx + 1)
    {
           if(xx == 8 )
                 continue;
           printf("Continue dongusunun icinde, xx in degeri simdi %d\n", xx);
    }
    return 0;
}

