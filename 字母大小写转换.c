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
//KiKi想完成字母大小写转换，有一个字符，判断它是否为大写字母，如果是，将它转换成小写字母；反之则转换为大写字母。
