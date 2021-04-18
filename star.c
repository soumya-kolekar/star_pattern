#include<stdio.h>
void display(int v,int h)
{ 
    int r,c;
    if(h==v)
    {
       for(r=v;r>=0;r--)
        {
            for(c=0;c<h;c++)
            {  if(r<=c)
                {
                printf(" * ");
                }
                else
                {
                printf("   ");
                }
            }
            printf("\n");
        }
    }
    else
    {
        printf("invalid");
    }

}
int main()
{
    int v,h,r,c;
    scanf("%d%d",&v,&h);
    display(v,h);

    return 0;

}