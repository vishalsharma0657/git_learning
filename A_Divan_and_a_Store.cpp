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
       long long int k,l,r,n,i,c=0;
        cin>>n>>l>>r>>k;
        long long int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=0;i<n;i++)
        {if(a[i]<l)
        {
            continue;
        }
        else if(a[i]>r)
        break;
        else{
            if(k>0)
            {
                k=k-a[i];
                if(k>=0)
                {
                    c++;
                }
                else
                break;
            }}
        }
        cout<<c<<endl;
    }
}
