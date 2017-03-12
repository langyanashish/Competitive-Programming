#include <bits/stdc++.h>
using namespace std;
#define LOOP(i,n)  for(int i=0;i<(n);i++)
int main() {
	// your code goes here
	int m,n;
	cin>>n;
	int a[n+1];
	float s1=0,s2=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		s1+=a[i];
	}
	s1/=n;
	cin>>m;
	int b[m+1];
	bool f=0;
	for(int i=0;i<m;i++)
	{
		cin>>b[i];
		s2+=b[i];
	}
	s2/=m;
	if(s2<s1)
		LOOP(i,n)
			cout<<a[i]<<" ";
	else
		LOOP(i,m)
			cout<<b[i]<<" ";
	return 0;
}
