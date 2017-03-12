#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int r,count=0,i=0;
		cin>>r;
		int TEMP=6,v[6];
		while(TEMP--)
		{
			cin>>v[i];
			i++;
		}
		if((pow((v[3] - v[1]),2) + pow((v[2] - v[0]),2)) <= r*r)
			count++;
		if((pow((v[5] - v[3]),2) + pow((v[4] - v[2]),2)) <= r*r)
			count++;
		if((pow((v[5] - v[1]),2) + pow((v[4] - v[0]),2)) <= r*r)
			count++;
		if(count>=2)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
	}
	return 0;
}
