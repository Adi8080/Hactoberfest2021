#include <iostream>

using namespace std;


int main()
{

    int arr[1000][1000];
    int m,n;
    
    cout << "Enter the number of rows : ";
    cin >> m;
    
    cout <<endl;
    
    cout << "Enter the number of columns : ";
    cin >> n;
    
 
    
    
    for (int row = 0; row <=m-1; row++)
    {
        
        for (int col = 0; col <=n-1; col++)
        {
            
            cin >> arr[row][col];
        }
        
        cout << endl;                // after every line or row...get new line
        
    }
    
    cout << endl << endl;
    
    // Algorithm for Wave PRINT
    for (int col = 0; col < n; col++)
    {
        
        if(col % 2 ==0)
        {
            // Even Column --> Top to bottom
            
            for (int row = 0; row < m; row++)
            {
                
                cout << arr[row][col] << ", ";
                
            }
            
            
        }
        
        else
        {
            // Odd Column --> Bottom to Top
            
            for (int row = m-1; row >=0; row--)
            {
                
                cout << arr[row][col] << ", ";
                
            }
            
            
        }
        
        
    }
    
    
    cout << "END ";
    
    return 0;
}
