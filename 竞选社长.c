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
//������������Ҫ��ѡ�糤����������ѡ�˷ֱ���A��B������ÿ��ͬѧ���벢��ֻ��ͶһƱ�����յ�Ʊ�����Ϊ�糤.
