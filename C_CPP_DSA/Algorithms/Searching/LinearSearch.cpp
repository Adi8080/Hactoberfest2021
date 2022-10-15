// C++ code to linearly search x in arr[]. 
//If element is present then return its location, otherwise return -1
 
#include <iostream>
using namespace std;
 
int search(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}
 
// Driver code
int main()
{
    int n,x;
    cout<<"Enter number of elements in array: ";
    cin>>n;
    int arr[n];
    cout<<"\nEnter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"\nEnter element to be searched: ";
    cin>>x;

    int result = search(arr, n, x);
    if(result==-1){
        cout<<"Element is not present in array";
    }
    else{
         cout<<"Element is present at index "<<result;
    } 
    return 0;
}
