#include<bits/stdc++.h>
using namespace std;
int main()
{
		int n,q;
		cin>>n>>q;
		string s[n][2];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<2;j++)
				cin>>s[i][j];
		}
		string str;
		for(int i=0;i<q;i++)
		{
			int j=i;
			cin>>str;
			int z=0,c=1,k,x=0;
			for(k=0;k<n;k++)
			{
				if(str==s[k][c])	x=1;	
				if(x==1){
					z=k;
					break;
				}			
			}		
			if(x==0)
				cout<<"Name not found\n";
			else	
				cout<<s[z][0]<<endl;
		}		
	return 0;
}

