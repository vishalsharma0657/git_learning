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
        int n,i,j;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int s=0,s1=0;
        for(i=0;i<n-2;i++)
        {
             s=s+(a[i]-a[i+1])*(a[i+1]-a[i+2]);
               
           
        }
        for(i=0;i<n-2;i++)
        {
             s=s+(a[i]-a[i+1])*(a[i+1]-a[i+2]);
               
           
        }
        cout<<s<<endl;
    }
}
            