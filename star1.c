#include<stdio.h>
int main()
{
    int r,c,i,j;
    scanf("%d%d",&r,&c);
   
    for(j=r;j>=1;j--)
    { for(i=c;i>=1;i--)
    {
        printf("%d",j);
    }
        printf("\n");
    }
    return 0;
}