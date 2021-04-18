#include<stdio.h>
int main()
{
    char ch='*';
    int r,c,i,j;
    scanf("%d%d",&r,&c);
   
    for(i=1;i<=r;i++)
    { for(j=1;j<=c;j++)
    {
        printf("%c",ch);
    }
        printf("\n");
    }
    return 0;
}