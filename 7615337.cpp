#include<iostream>
using namespace std;
long long t,n,x;
int main()
{
  cin>>t;
  while(t--)
  {
     cin>>n;
     x=0;
     while(n>=5)
     {
     n=n/5;
     x=x+n;
  }
  cout<<x<<endl;

}
}
