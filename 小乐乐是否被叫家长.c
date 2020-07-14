#include<stdio.h>
int main()
{
    int sum,average;//定义总分与平均分的变量
    int a,b,c;//定义三个变量储存三科成绩
    {

 scanf("%d %d %d",&a,&b,&c);
         sum=a+b+c;//求总分
    average=sum/3;//求平均值

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
