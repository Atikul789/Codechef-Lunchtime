#include<iostream>
using namespace std;
int main()
{
    long long t,n;
    cin>>t;
    while(t--)
        {cin>>n;
    long long a[105],b[105],c[105],mx=0,idx;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
     for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<n;i++)
    {

        c[i]=a[i]*b[i];
        if(mx<c[i])
        {
            mx=c[i];
        }
    }
    int result=0;
    for(int i=0;i<n;i++)
    {
        if(mx==c[i])
        {
           if(result<b[i])
           {
               result=b[i];
               idx=i;
           }
        }
    }
    cout<<idx+1<<endl;

}
}
