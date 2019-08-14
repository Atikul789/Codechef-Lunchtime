#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll T,A,B,N,ans;
int main()
{
    cin>>T;
    while(T--)
    {
        cin>>A>>B>>N;
        
        
        
        
        if(N%2==1)
        {
                     A=A*2;
        }
            
        

        
        ans=max(A,B)/min(A,B);
        cout<<ans<<endl;
    }
    
}