#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
const int mod = (int)1e9 + 7;
bool M[1002][1002];
int min(int a, int b, int c)
{
  int m = a;
  if (m > b) 
    m = b;
  if (m > c) 
    m = c;
  return m;
}
int solve(int n)
{
  int i,j;
  int R=n,C=n;
  int S[R][C];
  int max_of_s, max_i, max_j; 
  for(i = 0; i < R; i++)
     S[i][0] = M[i][0];   
  for(j = 0; j < C; j++)
     S[0][j] = M[0][j];
  for(i = 1; i < R; i++)
  {
    for(j = 1; j < C; j++)
    {
      if(M[i][j] == 1) 
        S[i][j] = min(S[i][j-1], S[i-1][j], S[i-1][j-1]) + 1;
      else
        S[i][j] = 0;
    }    
  } 
  max_of_s = S[0][0]; max_i = 0; max_j = 0;
  for(i = 0; i < R; i++)
  {
    for(j = 0; j < C; j++)
    {
    	//cout<<S[i][j]<<" ";
      if(max_of_s < S[i][j])
      {
         max_of_s = S[i][j];
         max_i = i; 
         max_j = j;
      }        
    }                 
    //cout<<endl;
  }
  //cout<<endl;
  return max_of_s;     
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n;
		set<int> s;
		set<int>::iterator it;
		int a[n][n];
		int ans=INT_MIN,cur;
		LOOP(i,n)
			LOOP(j,n)
			{
				cin>>a[i][j];
				s.insert(a[i][j]);
			}
		for (it = s.begin(); it != s.end(); it++)
		{
			x = *it;
			LOOP(i,n)
			{
				LOOP(j,n)
				{
					if(a[i][j] == x)
						M[i][j] = true;
					else
						M[i][j] = false;
				}
			}
			cur = solve(n);
			ans = max(ans,cur);
		}
		cout<<ans<<endl;
	}
	return 0;
}

