#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll Ar[1000006]={0};
int main() {

 ll T,N,x;
    cin>>T;
 //  cout<<T<<endl;
    while(T--)
    {
        scanf("%lld",&N);
       // cout<<N<<endl;
            for(int i=0;i<=1000002;i++)
            {
                Ar[i]=0;
            }
        vector<ll> A;
        for(int i=0;i<N;i++)
        {
            scanf("%lld",&x);
            if(Ar[x]==0)
            {
                Ar[x]=1;
                A.push_back(x);
            }
            else
            {
                Ar[x]++;
            }
        }
        ll ans=0;
        for(int i=0;i<A.size();i++)
        {
            for(int j=i+1;j<A.size();j++)
            {
                ll v=A[i]|A[j];
                 ll mx=max(A[i],A[j]);                   
                if(v<=mx)
                {
                  // cout<<A[i]<<" "<<A[j]<<endl;
                   ans=ans+(Ar[A[i]]*Ar[A[j]]);
                }

            }
        }
           for(int i=0;i<=1000002;i++)
            {
                if(Ar[i]>0)
                {
                    
                    ans=ans+((Ar[i]*(Ar[i]-1))/2);
                }
            }
        cout<<ans<<endl;
    }
}