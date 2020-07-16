#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,max;
    printf("ÇëÊäÈëa,b:\n");
    scanf("%d %d",&a,&b);
    max=(a>b)?a:b;
    printf("max=%d\n",max);
    return 0;
}
//输出最大值a或b
