#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        int fs1[150]={0},fs2[150]={0};
        for(int i=0;i<s1.size();i++)
        {
            fs1[s1[i]]++;
        }
        for(int i=0;i<s2.size();i++)
        {
            fs2[s2[i]]++;
        }
        bool f=0;
        for(int i=97;i<=122;i++)
        {
            if(fs1[i]>0 && fs2[i]>0)
            {
                f=1;
            }
        }
        if(f==1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;


    }
    return 0;
}
