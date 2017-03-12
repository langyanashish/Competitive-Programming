#include<bits/stdc++.h>
using namespace std;
int main()
{
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int j=0;j<n;j++)
            a[j]=0;
		for(int l=0;l<k;l++)
		{
			char s[20];
			int ans=0;
			scanf("%s",&s);
			if(strcmp(s,"CLOSEALL")==0)
			{
				ans=0;
				cout<<ans<<endl;
				for(int i=0;i<n;i++)
              		a[i]=0;
              	continue;
			}
			else
			{
				int b;
				cin>>b;
				if(a[b-1]==0)
					a[b-1]=1;
				else if(a[b-1]==1) 
					a[b-1]=0;
				for(int i=0;i<n;i++)
				{
					if(a[i]==1)
						ans++;
				}
				cout<<ans<<endl;
			}
		}
	return 0;
}

