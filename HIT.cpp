#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t,n;
    cin>>t;
    
    while(t--){
    
    cin>>n;
    int a[n],i;
    
    for(i=0;i<n;i++){
      cin>>a[i];
       }

           sort(a,a+n);
        
          if( a[(n/4)-1]!=a[n/4] && a[(2*n/4)-1]!=a[2*n/4] && a[(3*n/4)-1]!=a[3*n/4])
           cout<<a[n/4]<<" "<<a[2*(n/4)]<<" "<<a[3*(n/4)]<<"\n";
           else
           cout<<-1<<"\n";
    
}    
	return 0;
}
