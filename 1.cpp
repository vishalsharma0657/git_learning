#include<bits/stdc++.h>
using namespace std;

int main(){
     cin.tie(nullptr);
   cout.tie(NULL);
   ios_base::sync_with_stdio(false);
 
    int t;
    cin>>t;
    while(t--)
    {
        map<string,int> m;
        int n,i;
        cin>>n;
        for(i=0;i<n;i++)
        {string s;
            cin>>s;
            m[s]++;
        }
        for(auto it:m)
        {
            cout<<it.first<<endl;
        }
    }
}
