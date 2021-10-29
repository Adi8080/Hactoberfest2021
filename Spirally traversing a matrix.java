class Solution{
    static ArrayList<Integer> spirallyTraverse(int matrix[][], int r, int c)
    {
         ArrayList<Integer> a=new ArrayList<Integer>();
         int top=0,down=r-1,left=0,right=c-1,dir=0;
         while(top<=down&&left<=right){
            if(dir%4==0){
               for(int i=left;i<=right;i++){
                   a.add(matrix[top][i]);
               } 
               top+=1;
            }
            else if(dir%4==1){
                for(int i=top;i<=down;i++){
                    a.add(matrix[i][right]);
                }
                right-=1;
            }
            else if(dir%4==2){
                for(int i=right;i>=left;i--){
                    a.add(matrix[down][i]);
                }
                down-=1;
            }
            else if(dir%4==3){
                for(int i=down;i>=top;i--){
                  a.add(matrix[i][left]);  
                }
                left+=1;
            }
            dir++;
         }
         return a;
    }
}
