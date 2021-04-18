#include<stdio.h>
void display(int v,int h)
{ 
    int r,c;
    if(h==v)
    {  for(c=1;c<=h;c++)
       
        {
           for(r=v;r>=1;r--)
            {  if(c>=r)
                {
                printf(" %d ",r);
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