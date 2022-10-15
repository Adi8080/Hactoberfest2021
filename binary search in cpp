#include<iostream>
using namespace std;
int binarySearch(int arr[],int left,int right,int x)
{
    
    while(left<=right)
    {
        int mid=left+(right-left)/2;
        if(arr[mid]==x)
        {
            return mid;
        }
        else if (arr[mid]<x)
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }
    return -1;
}
int main()
{
    int size;
    cin>>size;
    int myarr[size];
    int output;
   
    for(int i=0;i<size;i++)
    {
        cin>>myarr[i];
    }
    cout<<"enter the element to be searched:"<<endl;
    int num;
    cin>>num;
    output=binarySearch(myarr,0,size-1,num);
    if(output==-1)
    {
        cout<<"no element found"<<endl;
    }
    else
    {
        cout<<"element found at index position"<<output<<endl;
    }
    return 0;
}
