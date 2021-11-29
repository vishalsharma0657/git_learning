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
       long long int n,i;
        cin>>n;
       long long int a[n];
        map<long long int,long long int> m;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            
            a[i]=a[i]%3;
            m[a[i]]++;
        }
       if(m[1]==m[2])
       cout<<m[1]<<endl;
       else if(m[1]>m[2])
       {
           if((m[1]-m[2])%3==0)
           cout<<(m[2]+((m[1]-m[2])/3)*2)<<endl;
           else
           cout<<"-1"<<endl;
       }
       else
       {
           if((m[2]-m[1])%3==0)
           {
               cout<<(m[1]+(((m[2]-m[1])/3)*2))<<endl;

           }
           else
           cout<<"-1"<<endl;
       }
    }
}

