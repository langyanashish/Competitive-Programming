#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
const int mod = (int)1e9 + 7;

/*int LIS(int *arr, int n)
{
	vector<int> ans(n);
	int finalAns = 0;
	for(int i=0;i<n;i++)
	{
	 	ans[i]=1;
	 	for(int j=0;j<i;j++)
	 	 	if(arr[j]<arr[i])
	 	 		ans[i]=max(ans[i],1+ans[j]);
	 	finalAns = max(ans[i], finalAns);
	}
	return finalAns;
}
int solve(int a[],int n)
{
	int ans=0;
	for(int i=0;i<n;i++)
		ans=max(ans,LIS(a,i+1));
	return ans;
}*/

int CeilIndex(std::vector<int> &v, int l, int r, int key) {
    while (r-l > 1) 
	{
    	int m = l + (r-l)/2;
    	if (v[m] >= key)
     	   r = m;
    	else
        	l = m;
    }
    return r;
}

int LongestIncreasingSubsequenceLength(std::vector<int> &v) 
{
    if (v.size() == 0)
        return 0;
    std::vector<int> tail(v.size(), 0);
    int length = 1;
    tail[0] = v[0];
    for (size_t i = 1; i < v.size(); i++) 
	{
        if (v[i] < tail[0])
            tail[0] = v[i];
        else if (v[i] > tail[length-1])
            tail[length++] = v[i];
        else
            tail[CeilIndex(tail, -1, length-1, v[i])] = v[i];
    }
    return length;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int l,r;
		int ans=0;
		int a[n];
		LOOP(i,n)
			cin>>a[i];
		LOOP(i,m)
		{
			cin>>l>>r;
			vector<int> v;
			for(int i=l-1;i<r;i++)
				v.PB(a[i]);
			ans=LongestIncreasingSubsequenceLength(v);
			cout<<ans<<endl;
		}
	}
	return 0;
}

