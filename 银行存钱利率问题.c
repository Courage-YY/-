#include<stdio.h>
#include<math.h>
int main()
{
    float a;
    float total,lv;
    int year;
    printf("请输入年限:");
    scanf("%d",&year);
    printf("请输入本金：");
    scanf("%f",&a);
    switch(year)
    {
    case 1:
        lv=0.0225;
        break;
    case 2:
        lv=0.0243;
        break;
    case 3:
        lv=0.0268;
        break;
    case 5:
        lv=0.0395;
        break;
    default:
        printf("输入有误！\n");
        break;
    }
    total = a*pow(1+lv,year);
    printf("最后获取金额：%6.2f\n",total);
    return 0;
}

    //输入本金和年限，计算银行的利率问题。
