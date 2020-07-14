#include<stdio.h>
int main()
{
  int n,i,j;
  printf("enter the number");
  scanf("%d",&n);
  for(i=5;i<=n;i++)
  {
    for(j=i;j<=n;j--)
    {
        printf("*");
    }
    printf("\n");
  }
}
      
