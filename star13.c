#include<stdio.h>
int main()
{
    int r,c,i,j;
    scanf("%d%d",&r,&c);
   
    for(i=65;i<=r;i++)
    { for(j=65;j<=c;j++)
    {
        printf("%c",j);
    }
        printf("\n");
    }
    return 0;
}