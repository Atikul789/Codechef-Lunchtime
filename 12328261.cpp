#include<bits/stdc++.h>
using namespace std;
int a[100005];
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int f=0;
        for(int i=0;i<n-1;i++)
        {
            if(abs(a[i]-a[i+1])>1)
            {
                f=1;
                break;
            }
        }
        if(f==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}
