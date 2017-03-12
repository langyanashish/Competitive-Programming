#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
const int mod = (int)1e9 + 7;

long long int basic_least_efficient_gcd(register long long int _Num1, register long long int _Num2)
{
    _Num1=_Num1>0?_Num1:-_Num1;
    _Num2=_Num2>0?_Num2:-_Num2;

    while(_Num1!=_Num2)
    {
        if(_Num1>_Num2)
            _Num1-=_Num2;
        else if(_Num2>_Num1)
            _Num2-=_Num1;
    }
    return _Num1;
}

long long int binary_gcd(register long long int _Num1,register long long int _Num2)
{
    while(_Num2) _Num2 ^= _Num1 ^= _Num2 ^= _Num1 %= _Num2;
    return _Num1;
}

long long int recursive_mod_gcd(long long int _Num1,long long int _Num2)
{
    if (_Num1 == 0)
        return _Num2;
    return recursive_mod_gcd(_Num2%_Num1, _Num1);
}

long long int one_line_recursive_mod_gcd(long long int _Num1,long long int _Num2)
{
    return (_Num2==0) ? _Num1 : one_line_recursive_mod_gcd(_Num2, _Num1%_Num2);
}

static long long int iterative_mod_gcd(register long long int _Num1, register long long _Num2)
{
    register long long int temp;

    while(_Num2!=0)
    {
        temp = _Num1 % _Num2;
        _Num1 = _Num2;
        _Num2 = temp;
    }
    return _Num1;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{	
	    long long int n,m;
    	scanf("%lld%lld", &n,&m);
    	long long  int ans = binary_gcd(n,m);
    	ans = ans < 0 ? -ans : ans ;
    	printf("%lld\n",ans);
	}
	return 0;
}
