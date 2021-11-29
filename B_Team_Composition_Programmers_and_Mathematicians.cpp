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
        long long int a,b,s=0,m;
        cin>>a>>b;
        m=min(a,b);
        s=a+b;
        s=s/4;
        m=min(m,s);
        cout<<m<<endl;
    }
}