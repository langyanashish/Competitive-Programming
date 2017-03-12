#include<bits/stdc++.h>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		char a[n],b[n];
		cin>>a>>b;
		int win[n+1];
		for(int i=0;i<=n;i++)
			cin>>win[i];
		int flag=0,max=0,count=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]==b[i])
			{
				flag=1;
				count++;
				//if(win[i]>max)
				//	max=win[i];
			}
		}
		if(flag==0)
			cout<<win[0]<<endl;
		else
		{
			if(count==n)	max=win[n];
			else
			{
				for(int i=0;i<=count;i++)
					if(win[i]>max)
						max=win[i];
			}
			cout<<max<<endl;
		}
	}
	return 0;
}

