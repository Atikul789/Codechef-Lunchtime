#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
ll t,n;
int main()
{
    ios::sync_with_stdio(false);
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<ll>v;
        ll x;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        ll ans=1e9;
        for(int i=0;i<n-1;i++)
        {
            if(abs(v[i]-v[i+1])<ans)
            {
                ans= abs(v[i]-v[i+1]);
            }
        }
        cout<<ans<<endl;
    }
}
