#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int tr,dr,ts,ds,tri[105]={0},dri[105]={0};
        cin>>tr;
        int x;
        int yes=1;
        for(int i=0;i<tr;i++)
        {
            cin>>x;
            tri[x]++;

        }
        cin>>dr;
        for(int i=0;i<dr;i++)
        {
            cin>>x;
            dri[x]++;
        }
        cin>>ts;
        for(int i=0;i<ts;i++)
        {
            cin>>x;
            if(tri[x]==0)
            {
                yes=0;
            }

        }
        cin>>ds;
        for(int i=0;i<ds;i++)
        {
            cin>>x;
            if(dri[x]==0)
            {

                yes=0;
            }
        }
        if(yes)
        {

            cout<<"yes"<<endl;

        }
        else
        {

            cout<<"no"<<endl;
        }
    }


}
