#include<iostream>
using namespace std;
int main()
{
    string s;
    int t;
    cin>>t;
    while(t--)
    {
         cin>>s;
         int l=s.size(),c=0;
         //cout<<l<<" "<<c<<endl;
         for(int i=0;i<l;i++)
         {
             int x=s[i]-'0';
             if(x==7 || x==4)
                c++;
         }
         cout<<l-c<<endl;


    }


}
