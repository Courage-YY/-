#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,sum;
   i=1;
    sum=0;
   printf("ÇëÊäÈënµÄÖµ");
   scanf("%d",&n);
   while(i<=n)
   {
       sum=sum+i;
       i++;
   }
   printf("sum= %d\n",sum);

    return 0;
}
求1+2+3+4+5+6+7+8+......+n  之和。
