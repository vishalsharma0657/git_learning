#include<bits/stdc++.h>
using namespace std;

int main(){
     cin.tie(nullptr);
   cout.tie(NULL);
   ios_base::sync_with_stdio(false);
 
    int t;
    cin>>t;
    while(t--)
    {int i,n;
    cin>>n;
        map<int,int> m;
        for(i=0;i<n;i++)
        {
            int a;
            cin>>a;
            m[a]++;
        }
        for(auto it:m)
        {
            cout<<it.first<<" "<<it.second<<endl;;
        }
    }
}
