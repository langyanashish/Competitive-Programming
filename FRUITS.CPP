#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,k,d=0,ans=0;
		cin>>n>>m>>k;
		if(n > m)
		{
			d=n-m;
			if(d>=k)
				d-=k;
			else
				d=0;
		}
		else if(n < m)
		{
			d=m-n;
			if(d>=k)
				d-=k;
			else
				d=0;
		}
		else
			d=0;
		ans=d;
		cout<<ans<<endl;
	}
	return 0;
}

