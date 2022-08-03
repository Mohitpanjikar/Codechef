#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int t;
  cin>>t;
  while(t--){
      int n,x,y,a,b;
      cin>>n>>x>>y>>a>>b;
      int p=x/a;
      int r=y/b;
      if(p>r){
          cout<<"DIESEL"<<endl;
      }
      else if(r>p){
          cout<<"PETROL"<<endl;
      }
      else{
          float p1=(float)x/a;
          float r1=(float)y/b;
           if(p1>r1){
          cout<<"DIESEL"<<endl;
      }
      else if(r1>p1){
          cout<<"PETROL"<<endl;
      }
      else{
          cout<<"ANY"<<endl;
          }
      }
  }
  return 0;
}