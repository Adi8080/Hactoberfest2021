//BINARY SEARCH

#include <iostream>
using namespace std;
int binarysearch(int a[], int key, int n)
{

    int s = 0;
    int e = n;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (a[mid] == key)
        {
            return mid;
        }
        else if (a[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int n, i;
    cout << "Enter the size of array";
    cin >> n;
    int a[n];
    cout << "Enter the elements of array";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int key;
    cout << "enter the key to be search";
    cin >> key;
    cout << binarysearch(a, key, n) << endl;
    return 0;
}
