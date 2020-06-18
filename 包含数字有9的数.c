#include<stdio.h>
int main()
{
 int sum=0;
 for(int i=1;i<=2019;i++)
 {
  if(i%10==9) sum++;//如果个位有9，sum就加1；
  else if(i/10%10==9) sum++;//否则十位有9，sum加1；
  else if(i/100%10==9) sum++;//否则百位有9，sum加1；
  //1-2019里的数没有千位带9的，所以不用再考虑千位了
 }
 printf("%d",sum);
 return 0;
 }
