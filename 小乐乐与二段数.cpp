#include<cstdio>
#include<cstring>
#include <algorithm>

using namespace std;

int ones[9999],tens[999], n, i, j, k, s, t, api, apj, aps, apt;
bool ck() {
    int p, r;
    if (i > 5)
        return 1;
    p = s;
    r = t;
    for (int q = 0; q < j; q++)
        p = p * 10 + s;
    for (int q = 0; q < i - j; q++)
        p = p * 10;
    for (int q = 1; q < i - j; q++)
        r = r * 10 + t;
    return p + r > n;
}

int main() {
    while (scanf("%d",&n), n) {
        printf("%d: ", n);
        if (n == 1) {
            puts("10");
            continue;
        }
        ones[0] = 1;
        tens[0] = 1;
        for (i = 1; i < 9999; i++)
            ones[i] = (ones[i - 1] * 10 + 1) % n;
        for (i = 1; i < 999; i++)
            tens[i] = tens[i - 1] * 10 % n;
        for (i = 1, aps = 0; i < 9999; i++) {
        k = 0;
        if ((n % 10 == 0 || n % 25 == 0) && i > 11)
         k = i - 11;
         for (j = k; j < i; j++)
         for (s = 1; s < 10; s++)
         for (t = 0; t < (n % 10 ? 10 : 1); t++)
        if (t != s && (((long long)ones[j]) * tens[i - j] * s + ones[i - j - 1] * t) % n == 0 && ck() &&
         (!aps || s < aps || s == aps && j > apj && s < apt)) {
         api = i;
                            apj = j;
                            aps = s;
                            apt = t;
                        }
            if (aps)
                break;
        }
        for (int x = 0; x < apj + 1; x++)
            printf("%d", aps);
        for (int x = 0; x < api - apj; x++)
            printf("%d", apt);
        printf("\n");
    }
    return 0;
}
//小乐乐从老师口中听到了二段数这个名词，想更深入的了解二段数。

//二段数是这样的正整数：恰好包含两种不同的十进制数字s和t，s不是0，并且s的所有出现均排列在所有的t的前面。例如，44444411是二段数（s是4，t是1），41、10000000和5555556也是。但4444114和44444都不是二段数。

//这时老师问小乐乐：给你一个任意的正整数n，你能求出比n大并且是n的倍数的最小二段数吗？请你帮助小乐乐解答这个问题。
