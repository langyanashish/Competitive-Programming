#include<iostream>
using namespace std;
int main()
{
	int t,count;
	cin>>t;
	if(t<=100)
	{
		while(t--)
		{
			int n,k;
			cin>>n;
			int a[n];
			for(int i=0;i<n;i++)
			{
					cin>>a[i];
			}
			cin>>k;
			for(int i=0;i<n-1;i++)
			{
				for(int j=i+1;j<n;j++)
				{
					if(a[i]*a[j]==k)
						count++;
				}
			}
			cout<<count<<endl;
			count=0;
		}
	}
	return 0;
}
