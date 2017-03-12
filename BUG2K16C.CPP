#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=1;i<=(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
const int mod = (int)1e9 + 7;
typedef struct
{
	int row;
	int col;
}node;
bool a[110][110];
int m,n;
queue<node> q;
bool fun(node x)
{
	int r=x.row;
	int c=x.col;
	if(r-1 > 0 && c+1 <= n)
		if(a[r-1][c]==0 && a[r][c+1]==0)
			return false;
	if(r-1>0)
	{
		if(a[r-1][c]==1)
		{
			node b;
			b.row=r-1;
			b.col=c;
			q.push(b);
			return true;
		}
	}
	if(c+1<=n)
	{
		if(a[r][c+1]==1)
		{
			node b;
			b.row=r;
			b.col=c+1;
			q.push(b);
			return true;
		}
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>m>>n;
		LOOP(i,m)
			LOOP(j,n)
				cin>>a[i][j];
		node z;
		if(a[m][1] == 0)
		{
			cout<<"NO\n";
			continue;
		}
		z.row=m;
		z.col=1;
		q.push(z);
		bool flag=false;
		while(!q.empty())
		{
			z=q.front();
			q.pop();
			if(z.row == 1 && z.col==n)
			{
				flag=true;
				break;
			}
			bool y=fun(z);
		}
		if(flag == false)
			cout<<"NO\n";
		else
			cout<<"YES\n";
	}
	return 0;
}
    #include<bits/stdc++.h>
    #include<queue>
    #define mp make_pair
    using namespace std;
    int a[102][102];
    int n,m,v[102][102];
    void check_path()
    {
    	queue<pair<int,int> > q;
    	q.push(mp(n,1));
    	v[n][1] = 1;
    	while(!q.empty())
    	{
    		int i = q.front().first;
    		int j = q.front().second;
    		q.pop();
    		if(v[i-1][j]==0 && a[i-1][j]==1)
    		{
    			v[i-1][j] = 1;
    			q.push(mp(i-1,j));
    		}
    		if(v[i][j+1]==0 && a[i][j+1]==1)
    		{
    			v[i][j+1] = 1;
    			q.push(mp(i,j+1));
    		}
    	}
    }
     
    int main()
    {
    	int t,i,j;
    	cin>>t;
    	while(t--)
    	{
    		cin>>n>>m;
    		for(i=0;i<=100;i++)
    		{
    			for(j=0;j<=100;j++)
    			{
    				a[i][j] = 0;
    				v[i][j] = 0;
    			}
    		}
    		for(i=1;i<=n;i++)
    			for(j=1;j<=m;j++)
    				cin>>a[i][j];
    		check_path();
    		if(v[1][m] == 1)
    			cout<<"YES\n";
    		else
    			cout<<"NO\n";
    	}
    	return 0;
    } 
