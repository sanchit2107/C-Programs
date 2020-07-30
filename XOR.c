#include<stdio.h>
void main()
{
char ch;
    do{
    int A,B;
    int a,b,c;

    printf("Enter the input of Gates");
    scanf("%d %d",&A,&B);

    A=!A;
    a=A&&B;

    A=!A;
    B=!B;
    b=A&&B;


    c=a||b;

    printf("\n Output: %d",c);

    printf("\n Do you want to continue:");
    scanf(" %c",&ch);

    }while(ch!='n'||'N');




}
