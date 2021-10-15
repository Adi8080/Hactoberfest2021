/*
It is a very good problem to know the insights of recursion.
*/

public class knights_tour {
    public static boolean knightsTour(int sr , int sc , int[][] board, int move, int[] dirX,int[] dirY){
        board[sr][sc] = move;
        if(move == 63){
            return true;
        }
        boolean res = false;
        for(int i = 0; i < 8; i++){
            int r = sr + dirX[i];
            int c = sc + dirY[i];
            if(r >= 0 && c >= 0 && r < board.length && c < board[0].length && board[r][c] == -1){
                res = knightsTour(r , c , board ,move + 1, dirX , dirY);
                if(res == true){
                    return res;
                }
            }
        }
        board[sr][sc] = -1;
        return res;

    }
    public static void knightTour(){
        int n = 8;
        int[][] board = new int[n][n];
        for(int i = 0; i < board.length; i++){
            for(int j = 0; j < board[0].length; j++){
                board[i][j] = -1;
            }
        }
        int[] dirX = {2,1,-1,-2,-2,-1,1,2};
        int[] dirY = {1,2,2,1,-1,-2,-2,-1};
        knightsTour(0,0,board,0,dirX,dirY);
        for(int i = 0; i < board.length; i++){
            for(int j = 0; j < board[0].length; j++){
                System.out.print(board[i][j]);
            }
            System.out.println();
        }
    }
    public static void main(String[] args){
        knightTour();
    }
}
