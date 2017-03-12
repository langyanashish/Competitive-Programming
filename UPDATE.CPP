#include<bits/stdc++.h>
using namespace std;
#define MAX 100000
int a[100000]={0};
int b[100000]={0};
int main()
{
	int n,q;
	cin>>n>>q;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<q;i++)
	{
		int type,l,r;
		cin>>type>>l>>r;
		if(type==1)
			a[l-1]=r;
		if(type==2)
		{
			int z=l,j;
			for(j=0;j<r-l+1;j++)
				b[j]=a[z++];
			sort(b,b+j);
			int ans=b[j-1]+b[j-2];
			cout<<ans<<endl;
		}
	}
}

