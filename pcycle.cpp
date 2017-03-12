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
	bool visited[1001];
	int a[1001],save[1001],temp[1010];
	int n,cycles,pos=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		visited[i]=0;
	}
	cycles=0;
	for(int j=0,i=1;i<=n;i++)
	{
		if(!visited[i])
		{
			cycles++;
			visited[i]=1;
			//cout<<cycles<<endl;
			save[pos++]=i;
			j=i;
				do
				{
					j=a[j];
					save[pos++]=j;
					visited[j]=true;
				}while(j!=i);
				temp[cycles]=pos-1;
		}
	}
	cout<<cycles<<endl;
	for(int j=1,i=0;i<pos;i++)
	{
		cout<<save[i]<<" ";
		if(i == temp[j])
			cout<<endl,j++;
	}
	return 0;
}

