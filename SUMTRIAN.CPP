#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,max1,max2;
		cin>>n;
		int a[n][100];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<=i;j++)
				cin>>a[i][j];
		}
		for(int i=n-1;i>0;i--)
		{
			for(int j=0;j<=i;j++)
			{
				max1=a[i][j]+a[i-1][j];
				max2=a[i][j+1]+a[i-1][j];
				a[i-1][j]=max(max1,max2);
			}
		}
		cout<<a[0][0]<<endl;
	}
	return 0;
}

