#include<bits/stdc++.h>
using namespace std;
int palin(int j){
 long temp,sum=0;
 temp=j;
 while(temp!=0){
  sum=sum*10;
  sum=sum+temp%10;
  temp=temp/10;
  }
 if(sum==j)
 return j;
 else return 0;
}
int main(){
 int t;
 cin>>t;
 while(t--){
  long l,r;
  long sum=0;
  cin>>l>>r;
  for(int i=l;i<=r;i++)
   sum+=palin(i);
  cout<<sum<<endl;
 }
 return 0;
}
