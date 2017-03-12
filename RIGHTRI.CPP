#include<bits/stdc++.h>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	long long int t;
	cin>>t;
	int count=0;
	while(t--)
	{
		int x1,x2,x3,y1,y2,y3;
		cin>>x1>>y1>>x2>>y2>>x3>>y3;
		int d1=x2-x1;
		int d2=x3-x1;
		int d3=x3-x2;
		x1=y2-y1;
		x2=y3-y1;
		x3=y3-y2;
		if((d1*d2 + x1*x2)==0 || (d2*d3 + x2*x3 )==0 || (d1*d3 + x1*x3)==0)
			count++;
	}
	cout<<count<<endl;
	return 0;
}
