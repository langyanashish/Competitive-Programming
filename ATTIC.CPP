#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a;
		cin>>a;
		int day=0;
		int len=0;
		int j=0;
		for(int i=0;i<a.length();i++)
		{
			if(a[i]=='.')
			{
				j=0;
				while(a[i]!='#')
				{
					j++;
					i++;
				}
				if(j>len)
				{
					day++;
					len=j;
				}
			}
		}
		cout<<day<<endl;
	}
	return 0;
}

