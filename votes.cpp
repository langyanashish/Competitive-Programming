#include<bits/stdc++.h>
using namespace std;
#define ll      long long
#define pb		push_back
#define loop(i,n)  for(int i=0;i<n;i++)
#define mod		1000000007
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string a[100];
		char ch;
		ll votes[100];
		loop(i,n)
		{
			cin>>a[i]>>ch;
			for(int j=0;j<n-1;j++)
			{
				if(a[i]==a[j])
					votes[j]=0;
			}
			if(ch=='+')
				votes[i]=1;
			else
				votes[i]=-1;
		}
		int ans=0;
		loop(i,n)
			ans+=votes[i];
		cout<<ans<<endl;
	}
	return 0;
}

