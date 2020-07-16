#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    float e=a*0.2+b*0.1+c*0.2+d*0.5;
    printf("%.1f\n",e);
    return 0;
}
//总成绩 = 实验成绩 * 20% + 课堂表现成绩 * 10% + 过程考核成绩 * 20% + 期末上机考试成绩 * 50%，现在输入KiKi的各项成绩，请计算KiKi的总成绩。
