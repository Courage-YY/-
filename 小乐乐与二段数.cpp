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
//С���ִ���ʦ���������˶�����������ʣ����������˽��������

//����������������������ǡ�ð������ֲ�ͬ��ʮ��������s��t��s����0������s�����г��־����������е�t��ǰ�档���磬44444411�Ƕ�������s��4��t��1����41��10000000��5555556Ҳ�ǡ���4444114��44444�����Ƕ�������

//��ʱ��ʦ��С���֣�����һ�������������n�����������n������n�ı�������С���������������С���ֽ��������⡣
