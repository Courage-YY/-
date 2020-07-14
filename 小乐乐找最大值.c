#include<stdio.h>
int main()
{
int a,b,c,d,max;
scanf("%d %d %d %d",&a,&b,&c,&d);
max=a;
if(max<b)
max=b;
if(max<c)
max=c;
if(max<d)
max=d;
printf("%d\n",max);
return 0;
}
小乐乐获得4个最大数，请帮他编程找到最大的数。
