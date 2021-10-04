
public class NQueensProblem {
    
   public static int Queencount(boolean board[][],int row){
        
       if(row == board.length){
           return 1;
       }
       int count=0;
       
       for(int col=0;col<board[row].length;col++){
           
           if(isItsafe(board,row,col)){
               
               board[row][col]=true;
               count=count + Queencount(board,row+1);
               board[row][col]=false;
           }
       }
       return count;
        
    }
   
   private static boolean isItsafe(boolean board[][],int row,int col){
       
       for(int i=row;i>=0;i--){
           
           if(board[i][col]){
               return false;
           }
           
       }
       
       for(int i=row,j=col ; i>=0&&j>=0;i--,j--){
           
           if(board[i][j]){
               return false;
           }
       }
       
       for(int i=row,j=col; i>=0 && j<board.length;i--,j++){
           if(board[i][j]){
               return false;
           }
       }
       return true;
   }

    
    public static void main(String[] args) {
        
        boolean board[][]=new boolean[8][8];
       
        System.out.println(Queencount(board,0));
    }
    
}
