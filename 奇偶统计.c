#include <stdio.h>
 int main()
{
    long int i, n, odd, even;
    odd = even = 0;

    while (scanf("%ld", &n) != EOF && (n >= 1 && n <= 100000))
    {
        for (i = 1; i <= n; i++)
        {
            if (0 == i % 2)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        printf("%ld %ld", odd, even);
    }

    return 0;
}
//��������һ��������N��ͳ��1~N֮�������ĸ�����ż���ĸ������������
//����
//5
//���
//3 2
