#include<iostream>
using namespace std;
int palin(int j)
{
 long temp,sum=0;
 temp=j;
 while(temp!=0)
 {
  sum=sum*10; 
  sum=sum+temp%10;
  temp=temp/10;
 }
 if(sum==j)
 return j;
 else return 0;
}
int main() {
	int test;
	cin>>test;
	if(test>0&&test<=100)
	{
	while(test--)
	{
		long left,right,sum=0;
		cin>>left>>right;
		for(int n=left;n<=right;n++)
		{
			sum+=palin(n);
		}
		cout<<sum<<endl;
	}
	}
	return 0;
}
