#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--)
    {
        long long int n,s,i,f=1;double s1,m=998244353.0;
        cin>>n;
        s=n*(n+1)/2;
        s1=s*s;
        for(i=1;i<=n;i++)
        f=f*i;
        s1=s1/f;
        cout<<s1%m<<endl;
    }
}
