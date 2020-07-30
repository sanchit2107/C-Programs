#include<stdio.h>
main()
{
int a[100],n,i,j,min,temp;
printf("Enter array size");
scanf("%d",&n);
printf("Enter array elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Array before Sorting is :");
for(i=0;i<n;i++)
printf("%d  ",a[i]);
for(i=0;i<n;i++)
{
    min=i;
    for(j=i+1;j<n;j++)
    {
        if(a[min]>a[j])
        min=j;
    }
    temp=a[j];
    a[j]=a[min];
    a[min]=temp;
}
printf("Array after Sorting using Selection Sort is :");
for(i=0;i<n;i++)
printf("%d  ",a[i]);
}
