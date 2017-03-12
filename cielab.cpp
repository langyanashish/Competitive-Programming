#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,d;
	cin>>a>>b;
	d=a-b;
	if(d%10!=5)
		d=10*(d/10)+5;
	else
		d=10*(d/10)+6;
	cout<<d;
	return 0;
}
