#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,num,xennyodd=0,xennyeven=0,yanaodd=0,yanaeven=0;
        cin>>n;

        for(int i=0;i<n;i++)
        {
            cin>>num;
            if(i%2==0)
            {
                xennyodd+=num;

            }
            else
            {
                xennyeven+=num;
            }

        }
         for(int i=0;i<n;i++)
        {
            cin>>num;
                        if(i%2==0)
            {
                yanaodd+=num;

            }
            else
            {
                yanaeven+=num;
            }

        }
        cout<<min((xennyodd+yanaeven),(xennyeven+yanaodd))<<endl;
    }
}
