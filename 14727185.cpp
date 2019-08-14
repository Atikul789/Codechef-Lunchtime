#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

 ll T;
    cin>>T;
        cin.ignore();
    while(T--)
    {
       string N;
    
       getline(cin,N);
       vector<ll> v;
        N=N+" ";
        ll num=0,c=1;
       for(int i=0;i<N.size();i++)
       {
           if(N[i]==' ')
           {
               //cout<<num<<endl;
               v.push_back(num);
               c=1;
               num=0;
               
           }
           else
           {
               if(c==1)
               num=num*c;
               else
                  num=num*10;
               num=num+(N[i]-'0');
               c++;
           }
       }

        ll ans=0,cnt=0;
        
            for(int i=0;i<v.size();i++)
            {

               
                 if(v[i]!=v.size()-1)
                {
                    
                    ans=max(ans,v[i]);
                }
                if(v[i]==v.size()-1)
                {
                    cnt++;
                }
                        if(cnt>1)
                    {
                        ans=max(ans,v[i]);
                    }
            }

        cout<<ans<<endl;
    }
}