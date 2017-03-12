#include<bits/stdc++.h>
using namespace std;
int a[100];
int rec(int x,int y,int z)
{
	int flag=0,sum=0;
    for(int i=x;i<z;i++)
    {
        sum=y-a[i];
        if(sum==0)
            return 1;
        else if(sum>0)
        {
            flag=rec(i+1,sum,z);
            if(flag==1)
                return 1;
 
        }
    }
    return 0;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,sum,flag=0;
		cin>>n>>m;
		for(int i=0;i<n;i++)
			cin>>a[i];
		if(rec(0,m,n)==1)
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}
	return 0;
}
