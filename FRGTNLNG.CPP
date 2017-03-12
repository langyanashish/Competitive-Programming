#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		string s[n];
		for(int i=0;i<n;i++)
		{
			cin>>s[i];
		}
		int c=0;
		for(int i=0;i<k;i++)
		{
			int l;
			cin>>l;
			string str[l][50];
			for(int j=0;j<l;j++,c++)
			{
				cin>>str[j][c];
			}
		}
		int flag=1;
		for(int i=0,c=0;i<n;i++)
		{
			for(int j=0;j<l;j++)
			{
				int z=strcmp(s[i],str[j][c]);
				if(z==0)	flag=0;
			}
			if(flag==0)	cout<<"YES \n";
				else	cout<<"NO \n";
		}		
	}
	return 0;
}

