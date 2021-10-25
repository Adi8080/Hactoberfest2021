#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
using namespace std;

void selectionsort(vector<int> v)
{
    vector<int>::iterator i, j, pos;
    int small;
    for (i = v.begin(); i != v.end() - 1; i++)
    {
        small = *i;
        for (j = i + 1; j != v.end(); j++)
        {
            if (*j < small)
            {
                small = *j;
                pos = j;
            }
        }
        swap(*i, *pos);
    }

    cout << "\nSorted vector using selection sort:\n";
    for (i = v.begin(); i != v.end(); i++)
        cout << *i << "  ";
}

int main()
{
    int n = 10;
    vector<int> v;
    srand(time(0));
    cout << "\nUnsorted vector:\n";
    for (int i = 0; i < n; i++)
    {
        v.push_back(1 + rand() % 100);
        cout << v[i] << "  ";
    }
    selectionsort(v);
    return 0;
}