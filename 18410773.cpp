#include<bits/stdc++.h>

using namespace std;
int T,N,A[50005];
int main()
{
    ios_base::sync_with_stdio(false);
    cin>>T;
    while(T--)
    {
        cin>>N;
        int gd;
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }
        gd=A[0];
        for(int i=1;i<N;i++)
        {
            gd=__gcd(gd,A[i]);
        }
        if(gd==1)
        {
          cout<<"0"<<endl;   
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
  
     
    
    
} 