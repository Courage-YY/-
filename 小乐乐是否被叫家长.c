#include<stdio.h>
int main()
{
    int sum,average;//�����ܷ���ƽ���ֵı���
    int a,b,c;//�������������������Ƴɼ�
    {

 scanf("%d %d %d",&a,&b,&c);
         sum=a+b+c;//���ܷ�
    average=sum/3;//��ƽ��ֵ

}
    if(average<60)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
