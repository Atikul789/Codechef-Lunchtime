#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
ll A,P[100005],S[100005];
int main() {
    ll T,N;
    cin>>T;
    while(T--)
    {
        cin>>N;
        for(int i=0;i<N;i++)
        {
            cin>>A;
            S[i]=P[i]=A;
            
            
        }
        for(int i=1;i<N;i++)
        {
            P[i]=P[i-1]+P[i];
        }
        for(int i=N-2;i>=0;i--)
        {
            S[i]=S[i+1]+S[i];
        }
        for(int i=0;i<N;i++)
        {
            S[i]=S[i]+P[i];
        }
        ll ans=*min_element(S,S+N);
         for(int i=0;i<N;i++)
         {
             if(ans==S[i])
             {
                 cout<<i+1<<endl;
                 break;
             }
         }
    }
    
    return 0;
}
