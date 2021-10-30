//hafiz abdulmanan
//github.com/hamsof


#include <iostream>
using namespace std;

int main()

{
    int rows=7,cols=7;
    int arr[rows][cols];

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(j==0)
                arr[i][j]=1;
            else if (j==i) 
                arr[i][j]=1;
            else     
                arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
        }
    }
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<=i;j++)
        { 
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int l1=4,l2=3,n=7,i=0,j=0,k=0;
    int A[l1]={14,16,18,20};
    int B[l2]={2,10,12};
    int C[n];
    for(;k<n and (i<l1 and j <l2);k++)
        if (A[i]<B[j])
            C[k]=A[i++];
        else 
            C[k]=B[j++];
    if(j<l2)
        while(j<l2)
            C[k++]=B[j++];
    if(i<l1)
        while(i<l1)
            C[k++]=A[i++];
    for(int m=0;m<n;m++)
    {
        cout << C[m] << " ";
    }

}