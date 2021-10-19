// program to calculate the a to the power b using recursion 
#include <iostream>

using namespace std;
int power(int m,int n){
    if(n==0) return 1;
    return power(m,n-1)*m;
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<power(a,b)<<endl;

    return 0;
}
