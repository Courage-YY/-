#include <stdio.h>
int main()
{
    char ch;
    while((ch=getchar())!=EOF)
    {
        if(ch=='\n')
            continue;
        if(ch>='a'&&ch<='z')
        {
            ch-=32;
        }
        else if(ch>='A'&&ch<='Z')
        {
            ch+=32;
        }
        printf("%c\n",ch);
    }
    return 0;
}
//KiKi�������ĸ��Сдת������һ���ַ����ж����Ƿ�Ϊ��д��ĸ������ǣ�����ת����Сд��ĸ����֮��ת��Ϊ��д��ĸ��
