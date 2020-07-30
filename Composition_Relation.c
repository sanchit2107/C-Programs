#include<stdio.h>
main()
{
    int a[5][2]={1,2,2,1,1,3,3,1,1,1},b[5][5];
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }


}
