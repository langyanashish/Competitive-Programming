#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    k=k%n;
    if(k == 0)
    {
    	for(int i=0;i<n;i++)
    		cout<<a[i]<<" ";
	}
    else
    {
    	k=n-k;
    	for(int j=k;j<n;j++)
        	cout<<a[j]<<" ";
    	for(int j=0;j<k;j++)
    	    cout<<a[j]<<" ";
    	cout<<endl;
	}
    return 0;
}

