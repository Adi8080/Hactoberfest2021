#include <iostream>
using namespace std;
int main()
{
int i=1,n,f=1;
cin>>n;
{
for(i=1;i<=n;++i)
if(i%2==0)
f=f*i;
}
cout<<"factorial is"<<f;
return 0;
}
