#include<bits/stdc++.h>
using namespace std;
#define pb		push_back
#define mod		1000000007
int main()
{
	int n;
	cin>>n;
	int a=0,b=0,c=0,d=0;
	a=n/5;
	n=n%5;
	b=n/3;
	n=n%3;
	c=n/2;
	n=n%2;
	d=n/1;
	cout<<a<<endl<<b<<endl<<c<<endl<<d;	
	return 0;
}

