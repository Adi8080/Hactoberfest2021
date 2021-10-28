#include <bits/stdc++.h>
using namespace std;

void print(int** board, int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout <<board[i][j] <<" ";
        }
        cout <<endl;
    }
    cout <<"\n\n";
}

bool isValid(int** board, int n, int row, int col){
    for(int i=row-1;i>=0;i--){
        if(board[i][col]==1){
            return false;
        }
    } 
    int col_left=col-1;
    int col_right=col+1;
    for(int i=row-1;i>=0;i--){
        if(col_left>=0){
            if(board[i][col_left]==1){
                return false;
            }
        }
        if(col_right<n){
            if(board[i][col_right]==1){
                return false;
            }
        }
        col_left--;
        col_right++;
    }
    return true;
}

void placeNQueens_helper(int** board, int n, int row){
    if(row == n){
        print(board, n);
        return;
    }   
    for(int j=0;j<n;j++){
        if(isValid(board, n, row, j)){
            board[row][j] = 1;
            placeNQueens_helper(board, n, row+1);
            board[row][j]=0;
        }
    }
}

void placeNQueens(int n){
    int** board = new int*[n];
    for(int i = 0;i < n;i++){
        board[i] = new int[n]();
    }
    placeNQueens_helper(board, n, 0);
}

int main(){
  int n; 
  cin >> n;
  placeNQueens(n);
}