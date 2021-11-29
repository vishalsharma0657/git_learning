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
    {int n,m,s=0,s1=0,s2=0,s3=0,s4=0,sum=0;
    cin>>n>>m;
    s=n-m;
    if(s<=m+1)
    {
        cout<<s<<endl;
    }
    else{
    s1=s/(m+1);
    s2=s%(m+1);
    s3=m+1-s2;
    s4=s1+1;
    sum=s3*s1*(s1+1)/2+s2*(s1+1)*(s1+2)/2;
    cout<<sum<<endl;}
    }
}
