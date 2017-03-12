#include<bits/stdc++.h>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		int n,max=0,pos=-1,smax=0;
		cin>>n;
		int x;
		vector<int> a,b;
		for(int i=0;i<n;i++)	
		{
			cin>>x;
			a.push_back(x);
		}	
		for(int i=0;i<n;i++)	
		{
			cin>>x;
			b.push_back(x);
		}	
		for(int i=0;i<n;i++)
		{
			if((a[i]*b[i])>=max)
			{
				if(a[i]*b[i]==max)
				{
					if(b[i]>smax)
					{
						pos=i+1;
						smax=b[i];
					}	
				}
				else
				{
					max=a[i]*b[i];
					pos=i+1;
					smax=b[i];
				}
			}	
		}
		cout<<pos<<endl;
	}
	return 0;
}

