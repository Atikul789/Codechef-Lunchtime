#include<iostream>
#include<algorithm>
using namespace std;
long long t,n,a[100005];
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        long long x=*min_element(a,a+n);
        x=x*(n-1);
        cout<<x<<endl;

    }
    return 0;
}
