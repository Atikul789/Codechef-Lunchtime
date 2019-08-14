#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
         n=n/10;
        long long result=((n)*(n+1))/2;
        cout<<result*10LL<<endl;
    }
}
