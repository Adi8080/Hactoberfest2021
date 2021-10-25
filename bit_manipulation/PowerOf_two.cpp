#include<iostream>
using namespace std;

bool powerOfTwo(int n){
    return n > 0 and ((n&(n-1)) == 0) ; 
}

int main(){
	int n ;
    cin >> n ;
	cout<<powerOfTwo(n);
}