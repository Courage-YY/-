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
//任意输入一个正整数N，统计1~N之间奇数的个数和偶数的个数，并输出。
//输入
//5
//输出
//3 2
