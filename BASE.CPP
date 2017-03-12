    #include<bits/stdc++.h>
    using namespace std;
    #define LL      long long
    #define LD      long double
    #define PB		push_back
    #define LOOP(i,n)  for(int i=0;i<(n);i++)
    #define FOR(i,a,b) for(int i=(a);i<(b);i++)
    const int mod = (int)1e9 + 7;
    int ans=0;
    void conversion(int m,int n)
    {
    	while(m >= n)
    		m/=n;
    	if(m == 1)
    		ans++;
    }
    int main()
    {
    	int t;
    	cin>>t;
    	while(t--)
    	{
    		ans=0;
    		int n;
    		cin>>n;
    		if(n == 0)
    			cout<<"0\n";
    		else if(n == 1)
    			cout<<"INFINITY\n";
    		else
    		{
    			for(int i=2;i<=n;i++)
    				conversion(n,i);
    			cout<<ans<<endl;
    		}
    	}
    	return 0;
    }
