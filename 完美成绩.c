#include <stdio.h>
 int main()
{
    int s;
     while (scanf("%d", &s) != EOF)
    {
        if (s >= 90 && s <= 100)
        {
            printf("Perfect");
        }
    }
    return 0;
}
//KiKi想知道他的考试成绩是否完美，请帮他判断。从键盘输入一个整数表示的成绩，编程判断成绩是否在90~100之间，如果是则输出“Perfect”。
