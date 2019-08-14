#include<bits/stdc++.h>
using namespace std;
long long c[3],k;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {

        cin>>c[0]>>c[1]>>c[2]>>k;
        long long n=k-1;
        sort(c,c+3);
        if(c[0]>=n)
        {
            cout<<(n*3)+1<<endl;
        }
        else
        {
            long long r=0;
            if(c[0]<n)
            {
                r=r+(c[0]*3);
                n=n-c[0];
                c[1]=c[1]-c[0];
                c[2]=c[2]-c[0];
                c[0]=c[0]-c[0];
                //sort(c,c+3);
            }
            if(c[1]>=n )
            {
                r=r+(n*2);
                n=n-n;


            }
            if(c[1]<n )
            {
                r=r+(c[1]*2);
                n=n-c[1];
                c[2]=c[2]-c[1];
                c[1]=0;
            }
            r=r+n+1;
            cout<<r<<endl;

        }

    }
    return 0;
}
