/* August Challenge 2016 */
#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define mod		1000000007
int main()
{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)	
			cin>>a[i];
		int sum=0,m=0,i,j,x,y;
		for(i=0;i<n;i++)
		{
			x=a[i];
			for(j=i+1;j<n;j++)
			{
				m=0;
				y=a[j];
				//cout<<a[i]<<" "<<a[j]<<endl;
				int z=(int)a[i]&a[j];
				if(z==x)
				{
					//cout<<a[i]<<" "<<a[j]<<endl;
					for(int k=i;k<=j;k++)
						m=max(m,a[k]);
				}
				else if(z==y)
				{
					//cout<<a[i]<<"   "<<a[j]<<endl;
					for(int k=i;k<=j;k++)
						m=max(m,a[k]);
				}
				sum+=m;
			}
		}
		cout<<sum<<endl;
	return 0;
}

