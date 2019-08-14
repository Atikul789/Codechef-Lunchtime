#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   ll T;
   cin>>T;
    cin.ignore();
    while(T--)
    {
        string sl;
        
        getline(cin,sl);
        sl=" "+sl;
        vector<int> v;
        for(int i=0;i<sl.size();i++)
        {
            if(sl[i]==' ')
            {
                v.push_back(i+1);
            }
        }
        locale loc;
        for(int i=0;i<v.size()-1;i++)
        {
            cout<<toupper(sl[v[i]],loc)<<". ";
        }
        int f=0;
        
        for(int i=v[v.size()-1];i<sl.size();i++)
        {
            if(f==0)
            {
                f=1;
                cout<<toupper(sl[i],loc);
            }
            else
            {
                cout<<tolower(sl[i],loc);
            }
        }
        cout<<endl;
          
    }

    
}