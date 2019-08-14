#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll T,N,B;
    cin>>T;
    while(T--)
    {
        cin>>N>>B;
        ll V=(N/B)/2;
        ll A=N%B;
        ll R=A+(V*B);
        if((N/B)%2==1)
        {
            V++;
        }
        cout<<R*V<<endl;
    }

    
}