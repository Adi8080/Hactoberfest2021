#include <bits/stdc++.h>
using namespace std;
 
bool isPowerOfTwo(int n)
{
    if (n == 0)
        return 0;
    while (n != 1)
    {
        if (n%2 != 0)
            return 0;
        n = n/2;
    }
    return 1;
}
 

int main()
{
    isPowerOfTwo(29)? cout<<"Yes\n": cout<<"No\n";
    isPowerOfTwo(128)? cout<<"Yes\n": cout<<"No\n";
    return 0;
}
 
