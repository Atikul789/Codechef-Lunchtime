#include<bits/stdc++.h>
using namespace std;
long long kmod[100005]={0},a[100005];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        for(int i=0;i<=n;i++)
        {
            kmod[i]=0;
        }
        for(int i=1;i<=n;i++)
        {

            cin>>a[i];
        }
        long long ans=-1000000000000;
        for(int i=n;i>=1;i--)
        {
            kmod[i%k]= kmod[i%k] + a[i];
            ans = max(ans, kmod[i%k]);
        }

        cout<<ans<<endl;
    }
}
