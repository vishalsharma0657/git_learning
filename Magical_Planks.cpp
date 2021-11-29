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
    {int i,j,c1=0,l;double c=0.0;
        string s,s2;int n;
        cin>>n;
        cin>>s;l=s.size();
        for(i=1;i<n;i++)
        {
            if(s[i]!=s[i-1])
            c=c+0.5;
        }
       
        cout<<round(c)<<endl;

    }
}