#include <bits/stdc++.h>
using namespace std;
# define PB	push_back
int main()
{
    int n,k,q,m;
    cin>>n>>k>>q;
    int a[n];
    vector<int>b;
    for(int i=0;i<n;i++)
        cin>>a[i];
    k=k%n;
    if(k == 0)
    {
    	for(int i=0;i<n;i++)
    		b.PB(a[i]);
	}
    else
    {
    	k=n-k;
    	for(int j=k;j<n;j++)
        	b.PB(a[j]);
    	for(int j=0;j<k;j++)
    	    b.PB(a[j]);
	}
	while(q--)
	{
		cin>>m;
		cout<<b[m]<<endl;
	}
    return 0;
}

