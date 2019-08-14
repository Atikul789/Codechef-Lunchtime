#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int flag=0,cnt=0;
        while(N--)
        {
            string Si;
            cin>>Si;
            if(Si=="cookie")
            {
                if(flag==1)
                {
                    cnt=1;
                }
                flag=1;

            }
            else
            {
                flag=0;
            }

        }

        if(cnt)
        {
            cout<<"NO"<<endl;
        }
        else if(!flag )
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
