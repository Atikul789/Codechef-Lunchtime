#include<bits/stdc++.h>
using namespace std;
int a[100005];
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
      int n,k,flag=0;
      cin>>n>>k;
     // vector<int>v;
      for(int i=1;i<=n;i++)
      {
          a[i]=i;
      }
      for(int i=1;i<=n;i++)
      {
         int x=i+k;
          if(i+k>n)
            break;
          else
          {
              if(a[i]==i)
              {
                      a[i]=i+k;
                      a[i+k]=i;

              }


          }



      }
      if(flag==0)
      {

          for(int i=1;i<=n;i++)
            {
                int  y=abs(a[i]-i);
                if(y!=k)
                    flag=1;
            }
            if(flag==1)
                cout<<"CAPTAIN AMERICA EVADES"<<endl;
            else
            {
                for(int i=1;i<=n;i++)
                    cout<<a[i]<<" ";
                       cout<<endl;
            }

      }


  }
}
