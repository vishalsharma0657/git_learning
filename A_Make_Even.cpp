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
        if(n%2==0)
        cout<<"0"<<endl;
        else
        {int c=-1;
            string s=to_string(n);
            if((s[0]-48)%2==0)
            c=1;
            else{
            
                for(i=n;i>0;i=i/10)
                {
                    if((i%10)%2==0)
                    {
                        c=2;break;
                    }
                }}
                cout<<c<<endl;
            }
        }
}