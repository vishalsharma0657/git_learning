#include<bits/stdc++.h>
using namespace std;
 
int main(){
     cin.tie(nullptr);
   cout.tie(NULL);
   ios_base::sync_with_stdio(false);
 
    int t;
    cin>>t;
    while(t--)
    {int n,i,m=INT16_MIN,m1=INT_MAX;
    cin>>n;
    int a[n];
    deque<int> d;
 
    for(i=0;i<n;i++)
    {
        cin>>a[i];
       
        m=max(m,a[i]);
        m1=min(m1,a[i]);
    }int k=n-1;
    if(( a[n-1]==m) ||( a[0]==m) ){
   for(i=0;i<=k;i++)
   {
       if(a[i]<a[k])
       {
           d.push_front(a[i]);
           a[i]=0;
       }
       else{
           d.push_back(a[k]);
           a[k]=0;k--;i--;
 
       }
   }
   for(auto it=d.begin();it!=d.end();it++)
   {
       cout<<*it<<" ";
   }
   cout<<endl;
    }
    else
    cout<<"-1"<<endl;
       
    }
}