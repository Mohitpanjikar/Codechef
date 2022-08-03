#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
     cin>>t;
     while (t--){
     int y,x;
     cin>>y>>x;
     if (x<y){
         cout<<-1<<endl;
         continue;
     }
     cout<<x-y+1<<" ";
     for (int j=1;j<=y;j++){
         if (j!= x-y+1   ){
             cout<<j<<" ";
         }
     }
     cout<<endl;
     
     
 }
 return 0;
}