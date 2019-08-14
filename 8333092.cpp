#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long  a[100005],v;
int main()
{
    long long t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        long long r=0,t=0;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]<=a[i+1])
            {
                t++;

            }
            else
            {
                v=(t*(t+1))/2;
                r=r+v;
                t=0;
            }
        }
         v=0;
         if(t>0)
         v=(t*(t+1))/2;

         r=r+v+n;
         cout<<r<<endl;

    }
}
