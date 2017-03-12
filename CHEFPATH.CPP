    #include<bits/stdc++.h>
    using namespace std;
     
    int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            long long n,m;
            cin>>n>>m;
            if(n&1 && m&1)
             cout<<"No"<<endl;
            else if(n==1 && m==1)
             cout<<"No"<<endl;
            else if(n==1 && m>=3)
             cout<<"No"<<endl;
            else if(m==1 && n>=3)
             cout<<"No"<<endl;
            else 
             cout<<"Yes"<<endl;
        }
        return 0;
    } 
