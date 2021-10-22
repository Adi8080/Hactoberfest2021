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
    for (int row = 0; row < m; row++)
    {
        
        if(row % 2 ==0)
        {
            // Even Row --> Left to Right
            
            for (int col = 0; col < n; col++)
            {
                
                cout << arr[row][col] << ", ";
                
            }
            
            
        }
        
        else
        {
            // Odd Row --> Right to Left
            
            for (int col = n-1; col >=0; col--)
            {
                
                cout << arr[row][col] << ", ";
                
            }
            
            
        }
        
        
    }
    
    
    cout << "END ";
    
    return 0;
}
