    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
    	int t,n;
    	cin>>t;
    	while(t--)
    	{
    		cin>>n;
    		bool flag=0;
    		long int a[n+1],b[n+1];
    		for(int i=0;i<n;i++)
    			cin>>a[i];
    		for(int i=0;i<n;i++)
    			cin>>b[i];
    		vector<pair<long int,long int> > v1;
    		for(int i=0;i<n;i++)
			{
    			//v1[i].first=a[i];
    			//v1[i].second=b[i];
    			v1.push_back({a[i],b[i]});
    		}
    		sort(v1.begin(),v1.end());
    		for(int i=0;i<v1.size()-1;i++)
			{
    			//cout<<v1[i].first<<" "<<v1[i].second<<endl;
    			if(v1[i].second<v1[i+1].second)
				{
    				flag=1;		
    				break;	
    			}
    		}
    		if(flag)
    			cout<<"NO"<<endl;
    		else
    			cout<<"YES"<<endl;
    	}
      return 0;    
    } 
