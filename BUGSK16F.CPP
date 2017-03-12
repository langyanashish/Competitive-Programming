#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
const int mod = (int)1e9 + 7;
bool isSubsetSum(int set[], int n, int sum)
{
    bool subset[sum+1][n+1];
    for (int i = 0; i <= n; i++)
      subset[0][i] = true;
    for (int i = 1; i <= sum; i++)
      subset[i][0] = false;
     for (int i = 1; i <= sum; i++)
     {
       for (int j = 1; j <= n; j++)
       {
         subset[i][j] = subset[i][j-1];
         if (i >= set[j-1])
           subset[i][j] = subset[i][j] ||  subset[i - set[j-1]][j-1];
       }
     }
    return subset[sum][n];
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
 		int n,k;
 		cin>>n>>k;
 		int a[n+1];
 		LOOP(i,n)
 			cin>>a[i];
 		bool ans=isSubsetSum(a,n,k);
 		if(ans == true)
 			cout<<"YES!\n";
 		else	
 			cout<<"NO!\n";
	}
	return 0;
}

