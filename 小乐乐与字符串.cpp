#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    long long c=0,h=0,n=0,ans=0;
    for(int i=0;i<s.length();i++)
    {
    if(s[i]=='N') n++;
    }
    for(int i=0;i<s.length();i++)
    {
    if(s[i]=='C') c++;
    else if(s[i]=='H') ans+=c*n;
    else if(s[i]=='N') n--;
    }
    cout<<ans<<endl;
    return 0;
}
//在庆祝祖国母亲70华诞之际，老师给小乐乐出了一个问题。大家都知道China的英文缩写是CHN，那么给你一个字符串s，你需要做的是统计s中子串“CHN”的个数。
//子串的定义：存在任意下标a < b < c，那么“s[a]s[b]s[c]”就构成s的一个子串。如“ABC”的子串有“A”、“B”、“C”、“AB”、“AC”、“BC”、“ABC”。
