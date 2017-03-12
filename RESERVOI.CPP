#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
const int mod = (int)1e9 + 7;
bool isSafe(string a[],int i,int j,int n, int m)
{
	bool flag=false;
	if(j == 0 || j == m-1)
		return false;
	if(i == n-1)
		return false;
	if(a[i][j-1]=='A' || a[i][j+1]=='A')
		return false;
	if(a[i+1][j] == 'A')
		return false;
	return true;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		string a[n];
		LOOP(i,n)
			cin>>a[i];
		bool f1=false,f2=false;
		for(int i=0;i<n;i++)
		{
			f2=false;
			for(int j=0;j<m;j++)
			{
				f1=false;
				if(a[i][j] == 'B')
					continue;
				else if(a[i][j] == 'A')
				{
					if(i>0)
					{	
						if(a[i-1][j] == 'W' || a[i-1][j] == 'B')
						{
							f1=true;
							break;
						}
					}
				}
				else
				{
					if(isSafe(a,i,j,n,m) == false)
					{
						f1=true;
						break;
					}
				}
			}
			if(f1 == true)
			{
				f2 = true;
				break;
			}
		}
		if(f2 == true)
			cout<<"no\n";
		else
			cout<<"yes\n";
	}
	return 0;
}

