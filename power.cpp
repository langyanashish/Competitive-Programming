#include<bits/stdc++.h>
using namespace std;
long int power(int a,int n)
{
	long int x=1;
	for(int i=0;i<(n/2);i++)
	{
		x*=a;
	}
	if(n%2==0)
		return x*x;
	else{
		x*=x;
		x*=a;
		return x;
	}
}
int main()
{
	int a,n;
	cin>>a>>n;
	long int p=power(a,n);
	cout<<p;
	return 0;
}
