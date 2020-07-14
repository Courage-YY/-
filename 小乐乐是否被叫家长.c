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
小乐乐的班级进行了一次期中考试，考试一共有3门科目：数学，语文，英语，小乐乐的班主任决定给没有通过考核的同学家长开一次家长会，考核的标准是三科平均分不低于60分，所以现在想请你帮忙算一算小乐乐会不会被叫家长。
