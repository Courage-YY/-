#include<stdio.h>
#include<math.h>
int main()
{
    float a;
    float total,lv;
    int year;
    printf("����������:");
    scanf("%d",&year);
    printf("�����뱾��");
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
        printf("��������\n");
        break;
    }
    total = a*pow(1+lv,year);
    printf("����ȡ��%6.2f\n",total);
    return 0;
}
