#include<stdio.h>
main()
{
int i,j,k;
for(i=1;i<=5;i++)
{k=1;
for(j=1;j<=i;j++)
{
    if(i%2==0){
    printf("%d",!k);

    }
    else{
printf("%d",k);
k=0;
    }

}
printf("\n");
}
}
