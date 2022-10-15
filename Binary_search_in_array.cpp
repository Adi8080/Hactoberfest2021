#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key)  //function for binary search
{
    int start=0;
    int end=n;
    while (start<=end)
    {
        int mid=(start+end)/2;
        if (arr[mid]==key)
        {
            return mid;
        }
        else if (arr[mid]>key)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
        
        
    }
    return -1;
}
int main()  // Driver code
{
    cout<<"Enter the size of the array"<<endl;
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the values of the array"<<endl;
        cin>>arr[i];
    
    }
    int key;
     cout<<"Enter the key to be find"<<endl;
    cin>>key;
    cout<<binarysearch(arr,n,key)<<endl;
    return 0;
}
