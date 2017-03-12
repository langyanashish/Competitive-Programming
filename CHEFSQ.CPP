#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		int f;
		cin>>f;
		int b[f];
		for(int i=0;i<f;i++)
			cin>>b[i];
		int j=0,c=0,k=0;
		for(int i=0;i<n;i++)
		{
			if(a[i] == b[k])
			{
				c++;
				k++;
				for(int j=i+1;j<i+f;j++)
				{
					if(a[j] == b[k++])
						c++;
					else
					{
						c=0;
						k=0;
						break;
					}
				}
			}
		}
		if(c==f)
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}
	return 0;
}

