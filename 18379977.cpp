#include<bits/stdc++.h>

using namespace std;
int a[100005];
int main()
{
    ios_base::sync_with_stdio(false);
    int T;
    cin>>T;
    int N,K;
    while(T--)
    {
        cin>>N>>K;
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
          
            if(a[i]<=K)
            {
                a[i]=1;
            }
        }
        int gd=a[0];
        for(int i=1;i<N;i++)
        {
            gd=__gcd(gd,a[i]);
        }
          while(1)
            {
                int f=0; 
                for(int j=2;j<=sqrt(gd);j++)
                {
                    if(gd%j==0 && j<=K)
                    {
                        f=1;
                        gd=gd/j;
                        break;
                    }
                }
                if(f==0)
                    break;
            }
        if(gd<=K)
        {
            gd=1;
        }
        if(gd==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }    
} 