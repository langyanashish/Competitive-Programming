#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
const int mod = (int)1e9 + 7;
int dist[1001];
bool graph[1001][1001];

void bfs(int start,int n)
{
    bool visited[n];
    LOOP(i,n)
        visited[i] = false;
    list<int> queue;
    visited[start] = true;
    int s ;
    queue.PB(start);
    while(!queue.empty())
    {
        s = queue.front();
        queue.pop_front();
        for(int i = 0; i < n ; ++i)
        {
        	if(graph[s][i] == true)
            if(visited[i] == false)
            {
                dist[i] = dist[s] + 6;
                visited[i] = true;
                queue.push_back(i);
            }
        }
    }
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,u,v,s;
		cin>>n>>m;
		LOOP(i,1001)
			LOOP(j,1001)
				graph[i][j]=false;
		LOOP(i,m)
		{
			cin>>u>>v;
            u--;
            v--;
			graph[u][v] = graph[v][u] = true;
		}
		LOOP(i,n)
		{
			graph[i][i] = true;
		}
		cin>>s;
		s--;
        LOOP(i,1001)
             dist[i] = 0;
		bfs(s,n);
        LOOP(i,n)
        {
            if(s != i)
            {
                if(dist[i]>0)
                     cout<<dist[i]<<" ";
                else
                     cout<<"-1 ";
            }
        }
		cout<<endl;
	}
	return 0;
}

