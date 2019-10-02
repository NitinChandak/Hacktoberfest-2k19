// to count number of words in string
#include<stdio.h>
#include<string.h>
int main()
{
    int i,c=0;
    char a[500];
    printf("enter the sentence\n");
    scanf("%[^\n]s",a);
    for (i=0; a[i] != '\0'; i++)
    {
        if (a[i]==' ')
        {
            c++;
        }
    }
    printf("the number of words are %d\n",c+1);
}