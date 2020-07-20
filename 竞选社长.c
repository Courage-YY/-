#include <stdio.h>

int main(void)
{
    int a, b, ch;
    a = b = 0;

    while ((ch = getchar()) != EOF)
    {
        if (ch == '0')
        {
            break;
        }
        else if (ch == 'A')
        {
            a++;
        }
        else if (ch == 'B')
        {
            b++;
        }
    }
    if (a == b)
    {
        printf("E\n");
    }
    else
    {
        printf("%c\n", a > b ? 'A' : 'B');
    }

    return 0;
}
//假设你们社团要竞选社长，有两名候选人分别是A和B，社团每名同学必须并且只能投一票，最终得票多的人为社长.
