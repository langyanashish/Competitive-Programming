/*	September Challenge 2016	*/
#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define mod		1000000007
int a[1001][1001];
int color[1001];
int n;
map<int,int>mo;
void reset()
{
	LOOP(i,1001)
		LOOP(j,1001)
			a[i][j]=0;
	LOOP(i,1001)
		color[i] = -1;
}
bool isBipartite(int s)
{
    color[s] = 1;
    queue <int> q;
    q.push(s);
    while (!q.empty())
    {
        int u = q.front();
        //mo[u]=1;
        q.pop();
        for (int v = 0; v < n; ++v)
        {
            if (a[u][v] == 1 && color[v] == -1)
            {
                color[v] = 1 - color[u];
                q.push(v);
            }
            else if (a[u][v] == 1 && color[v] == color[u])
                return false;
        }
    }
    return true;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		reset();
	    //mo.clear();
		int N,M;
		cin>>N>>M;
		n=N;
		int x,y;
		LOOP(i,M)
		{
			cin>>x>>y;
			a[x-1][y-1]=a[y-1][x-1]=1;
		}
		LOOP(i,n)
		{
			LOOP(j,n)
			{
				if(i==j)
					a[i][j]=0;
				else if(a[i][j]==0)
					a[i][j]=1;
				else if(a[i][j]==1)
					a[i][j]=0;
			}
		}
		bool flag=false;
		for(int i=0; i < n; ++i)
       	{
       		if(color[i]==-1)
        	{  
    			isBipartite(i)?flag=0:flag=1;
    			if(flag == true)
    				break;
    		}
		}
		if(flag == false)	
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}
