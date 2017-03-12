    /*	September Challenge 2016	*/
    #include<bits/stdc++.h>
    using namespace std;
    #define LL      long long
    #define LD      long double
    #define PB		push_back
    #define LOOP(i,n)  for(int i=0;i<(n);i++)
    #define FOR(i,a,b) for(int i=(a);i<(b);i++)
    #define mod		1000000007
    int hash[7];
    void reset()
    {
    	LOOP(i,7)
    		hash[i]=0;
    }
    int main()
    {
    	int t;
    	cin>>t;
    	while(t--)
    	{
    		int N;
    		cin>>N;
    		int size;
    		int a;
    		set<int>s;
    		int ans[N+1];
    		int c=0;
    		for(int i=1;i<=N;i++)
    		{
    			s.clear();
    			reset();
    			cin>>size;
    			ans[i]=size;
    			for(int j=0;j<size;j++)
    			{
    				cin>>a;
    				hash[a]++;
    				s.insert(a);
    			}
    			c=s.size();
    			bool f;
    			do
    			{
    				f=false;
    				c=0;
    				LOOP(k,7)
    				{
    					if(hash[k]>0)
    					{
    						f=true;
    						hash[k]--;
    						c++;
    					}
    				}
    				if(c==4)
    					ans[i]+=1;
    				else if(c==5)
    					ans[i]+=2;
    				else if(c==6)
    					ans[i]+=4;
    			}while(c>3 && f==true);
    		}
    		bool flag=false;
    		int result=0,index;
    		for(int i=1;i<=N;i++)
    		{
    			if(ans[i]>result)
    			{
    				result=ans[i];
    				index=i;
    			}
    		}
    		for(int i=1;i<=N;i++)
    		{
    			if(ans[i]==result && i!=index)
    			{
    				flag=true;
    				break;
				}
			}
    		if(flag==true)
    			cout<<"tie\n";
    		else
    		{
    			if(index==1)
    			cout<<"chef\n";
    			else
    				cout<<index<<endl;
    		}
    	}
    	return 0;
    } 
