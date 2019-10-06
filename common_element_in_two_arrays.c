#include<stdio.h>
int main()
{
	//initialize s[n] to an element which is not in anyone of the array
    int a[100],b[100],s[100]={0},i,j,c,n;
    printf("enter the number of elements in an arrays\n");
    scanf("%d",&n);
    if(n<100)
    { //maximum number of array elements can be 100 as array is initialized to 100
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
    //saving common elements in another array s[n] whose elements are initialized to zero
    for(i=0;i<n;i++)
    {
	    for(j=0;j<n;j++)
	    {
		    if(a[i]==b[j])
		    {
			    s[i]=a[i];
		    }
	    }
    }
    //printing the elements which are not zero
    printf("the common elements are : ");
    for(i=0;i<n;i++)
    {
	    if(s[i]!=0)
	    {
		    printf("%d ",s[i]);
	    }
    }
    return 0;
}
