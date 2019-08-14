#include<iostream>
using namespace std;
int main()
{
   long long t;
   cin>>t;
   while(t--)
   {
       long long l,d,s,c;
       cin>>l>>d>>s>>c;
       d=d-1;
       for(int i=1;i<=d;i++)
       {

           if(s>1000000000)
            break;
            s=s+(s*c);
       }

       if(s>=l)
        cout<<"ALIVE AND KICKING"<<endl;
       else
        cout<<"DEAD AND ROTTING"<<endl;
   }

}
