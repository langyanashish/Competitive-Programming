#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define mod		100000000
int main()
{
	int t;
	cin>>t;
	while(t--)
	{	
		int n;
		cin>>n;	
 		while (n%2 == 0)
    	{
        	printf("%d ", 2);
        	n = n/2;
    	}
    	for (int i = 3; i <=sqrt(n) ; i+=2)
    	{
       		while (n%i == 0)
        	{
            	printf("%d ", i);
            	n = n/i;
        	}
    	}
    	if (n > 2)
        	printf ("%d ", n);
		cout<<"\n";
	}
	return 0;
}
