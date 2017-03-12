#include<bits/stdc++.h>
using namespace std;
#define max(a,b) (a > b ? a : b)
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		int min,max;
		min=max(a,b);
		max=a+b;
		cout<<min<<" "<<max<<endl;
	}
	return 0;
}

