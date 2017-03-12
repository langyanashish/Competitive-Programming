#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
const int mod = (int)1e9 + 7;
LL k;
LL init(vector<LL> array)
{
	LL ans=0;
	//vector< vector<int> > subarray;
	/* ... initialization of array ... */
    for(LL start=0; start<array.size(); start++)
    {
    	LL sum=0;
    	if(array[start] >= k)
    	{
    		ans+=array.size()-start;
		}
		else
        for(LL end=start; end<array.size(); end++)
        {
        	sum = sum | array[end];
            //vector<int> sub;
            //for(int i=start; i<=end; i++)
            //{
            //	sum = sum | array[i];
                //sub.push_back(array[i]);
            //}
			if(sum >= k)
			{
				ans+=array.size()-end;
				break;
			}
            //subarray.push_back(sub);
            //sub.clear();
        }
    }
    return ans;
}
int main()
{
	LL t;
	cin>>t;
	while(t--)
	{
		vector<LL> array;
		LL n;
		LL temp;
		cin>>n>>k;
		LOOP(i,n)
		{
			cin>>temp;
			array.PB(temp);
		}
		//vector< vector<int> > subarray;
		LL ans=0,sum=0;
		ans = init(array);
		/*for(int i=0;i<subarray.size();i++)
		{
			sum=0;
			for(int j=0;j<subarray[i].size();j++)
				sum = (sum | subarray[i][j]);
			//cout<<sum<<endl;
			if(sum>=k)
				ans++;
		}*/
		cout<<ans<<endl;
	}
	return 0;
}
