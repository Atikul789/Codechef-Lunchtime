#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;
int main() {

   ll T,N,A;
    cin>>T;
    while(T--)
    {
        cin>>N;
        ll ans=0;
        for(int i=0;i<N;i++)
        {
            cin>>A;
            ans=ans|A;
        }
        cout<<ans<<endl;
    }
}