#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
ll T,N,D,A[100005],cut;
int main() {
    cin>>T;
    while(T--)
    {
        cin>>N>>D;
        ll S=0;
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
            S+=A[i];
        }
        if(S%N!=0)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            ll avg=S/N;
            ll ans=0;
            
            for(int i=0;i<N-D;i++)
            {
                cut=0;
                if(A[i]>avg)
                {
                    cut=A[i]-avg;
                    A[i]-=cut;
                    A[i+D]+=cut;
                }
                if(A[i]<avg)
                {
                    cut=avg-A[i];
                    A[i]+=cut;
                    A[i+D]-=cut;
                }
                ans+=cut;
                
            }
            int f=0;
            for(int i=0;i<N;i++)
            {
                if(A[i]!=avg)
                {
                    f=1;
                }
            }
            if(f==0)
                cout<<ans<<endl;
            else
                cout<<"-1"<<endl;
        }
        
    }
    return 0;
}
