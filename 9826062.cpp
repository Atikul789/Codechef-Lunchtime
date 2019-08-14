#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l;
        cin>>l;
        string s;
        cin>>s;
        int col[3]={0};
        for(int i=0;i<l;i++)
        {
            if(s[i]=='R')
                col[0]++;
            else if(s[i]=='G')
                col[1]++;
            else
                col[2]++;
        }
        sort(col,col+3);
        cout<<col[0]+col[1]<<endl;
    }
}
