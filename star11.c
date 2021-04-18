 /*
    for(j=r;j>=1;j--)
    { for(i=c;i>=1;i--)
    {*/
    #include <stdio.h>
int main()
 {
   int r,i,j,c,n=1;
   printf("Enter the number of rows and columns ");
   scanf("%d%d",&r,&c);
   for (i=r;i>=1;i--) {
      for (j=c;j>=1;j--) {
         printf(" \t %d\t ",n);
         ++n;
      }
      printf("\n");
   }
   return 0;
}