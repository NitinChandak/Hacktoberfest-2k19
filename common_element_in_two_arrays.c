#include<stdio.h>
int main()
{
    int a[100],b[100],i,j,c,n;
    printf("enter the number of elements in an arrays\n");
    scanf("%d",&n);
    printf("enter the elements of 1st array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the elements of 2nd array\n");
    for(j=0;j<n;j++)
    {
        scanf("%d",&b[j]);
    }
}