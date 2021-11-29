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
        long long int n,i,k=1,k1=-1,s=0;
        cin>>n;
        long long int a[n];
        long long int b[n+1];
        b[0]=0;
       vector<pair<long long int,long long int>> v;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
       v.push_back(make_pair(a[i],i));
        }sort(v.rbegin(),v.rend());
       for(i=0;i<n;i++)
       {
           if(i%2==0)
           {
               s=s+k*v[i].first;
               b[v[i].second+1]=k;
               k++;
           }
           else
           {
              s=s+abs(k1*v[i].first);
               b[v[i].second+1]=k1;
               k1--; 
           }
       }
       cout<<2*s<<endl;
       for(i=0;i<=n;i++)
       cout<<b[i]<<" ";
       cout<<endl;
    }
}
