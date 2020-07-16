#include<stdio.h>
int main()
{
int n,a,sum;
a=1;
sum=0;
printf("ÇëÊäÈënµÄÖµ:");
scanf("%d",&n);
for(a=1;a<=n;a++)
{
sum=sum+a;
}
printf("sum=%d\n",sum);
return 0;
}
//用for循环求1+2+3+4+5+6+7+8+......+n  之和。
