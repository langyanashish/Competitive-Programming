#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		float b,ls,rsmin,rsmax;
		cin>>b>>ls;
		rsmin=(ls*ls)-(b*b);
		rsmax=(ls*ls)+(b*b);
		printf("%f %f\n",sqrt(rsmin),sqrt(rsmax));
	}
	return 0;
}

