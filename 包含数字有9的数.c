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
今年是2019年，KiKi想知道1~2019中有多少个包含数字9的数。包含数字的数是指有某一位是“9”的数，例如“2019”、“199”等。
