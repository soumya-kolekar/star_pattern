#include<stdio.h>
void display(int v,int h)
{ 
    int r,c;
    if(h==v)
    { for(c=65;c<h;c++)
       
        {
            for(r=65;r<v;r++)
            {  if(r<=c)
                {
                printf(" %c ",c);
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