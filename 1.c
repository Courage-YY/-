#include<stdio.h>
int main()
{
 int sum=0;
 for(int i=1;i<=2019;i++)
 {
  if(i%10==9) sum++;//�����λ��9��sum�ͼ�1��
  else if(i/10%10==9) sum++;//����ʮλ��9��sum��1��
  else if(i/100%10==9) sum++;//�����λ��9��sum��1��
  //1-2019�����û��ǧλ��9�ģ����Բ����ٿ���ǧλ��
 }
 printf("%d",sum);
 return 0;
 }
