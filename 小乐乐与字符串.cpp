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
//����ף���ĸ��70����֮�ʣ���ʦ��С���ֳ���һ�����⡣��Ҷ�֪��China��Ӣ����д��CHN����ô����һ���ַ���s������Ҫ������ͳ��s���Ӵ���CHN���ĸ�����
//�Ӵ��Ķ��壺���������±�a < b < c����ô��s[a]s[b]s[c]���͹���s��һ���Ӵ����硰ABC�����Ӵ��С�A������B������C������AB������AC������BC������ABC����
