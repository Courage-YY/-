#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,n,sum;
   sum=0;
   i=1;
   printf("ÇëÊäÈënµÄÖµ");
   scanf("%d",&n);
   do
   {
      sum=sum+i;
      i++;
   }
   while(i<=n);

    printf("sum= %d\n",sum);
    return 0;
}
求1+2+3+4+5+6+7+8+......+n  之和。
