#include<stdio.h>
int main()
{
    int r,c,i,j;
    scanf("%d%d",&r,&c);
   
    for(i=r;i>=65;i--)
    { for(j=c;j>=65;j--)
    {
        printf("%c",j);
    }
        printf("\n");
    }
    return 0;
}