#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,m;
    string s;
    cin>>t;
    while(t--)
    {
        int c0=0,c1=0;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')
                c0++;
                else
                    c1++;
        }
        if(c1==1 || c0==1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;

    }
}
