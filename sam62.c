#include<stdio.h>
#define max 100000
void main()
{
    int n[max],i;
    printf("\nenter value\n");
    scanf("%d",&n);
    for(i=0;i<max;i++)
  {
      if((n[i]==0)||(n[i]==1))
      {
          n[i]=n[i];
      }
      else
      {   
          printf("\nNo\n");
          break;
      }
  }
}
}
