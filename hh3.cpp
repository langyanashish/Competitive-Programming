#include <iostream>
using namespace std;
void func(int x)
{
cout << x ;
}
int main()
{
void (*n)(int);
n = &func;
(*n)(1);
n(1);
return 0;
}
