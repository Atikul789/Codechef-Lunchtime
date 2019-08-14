#include<bits/stdc++.h>
using namespace std;
long long a[100005];
int main()
{
    long long t,l,r;
    a[1]=1;
    for(int i=2;i<=100004;i++)
    {
        long long s=1;
        for(int j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                int x=i/j;
                if(x!=j)
                {
                    if(x%2==1)
                    s=s+x;
                if(j%2==1)
                    s=s+j;

                }
                else
                {
                     if(x%2==1)
                    s=s+x;
                }

            }
        }
        if(i%2==1)
            s=s+i;

        a[i]=s;

    }
    cin>>t;
    while(t--)
    {
        cin>>l>>r;
        long long rr=0;

        for(int i=l;i<=r;i++)
        {
               rr=rr+a[i];
              //cout<<a[i]<<" ";


        }
         //cout<<endl;
        cout<<rr<<endl;
    }
}
