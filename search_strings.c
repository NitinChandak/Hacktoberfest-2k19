// program to search word in a givan sentence
#include<stdio.h>
#include<string.h>
int main()
{
int i,f;
int c=0;
char a[500];
char b[500];
printf("enter the sentence to serarch a word\n");
scanf("%[^\n]", a);
printf("enter the word you want to search\n");
scanf("%s", b);
for (i=0;a[i] != '\0';i++)
{
    if (a[i] == b[c] && b[c] != '\0')
    {
        c++;
        if (c==strlen(b))
        {
            f = 1;
        }
        else
        {
            f = 0;
        }
    }
    else
    {
        c = 0;
    }
}
if (f == 1)
{
    printf("The word has found\n");
}
else
{
    printf("No result found\n");
}
}