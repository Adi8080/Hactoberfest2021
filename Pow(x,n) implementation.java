class Solution {
    
    boolean flag = false;
    int num;
    
    public double myPow(double x, int n) {
        
        if(n==0) return 1;
        
        if(!flag){
            check(n);
            flag = true;
        }
        if(Math.abs(n)==1) {
            if(n==num&&n<0) return 1/x;
            return x;
        }
        if(Math.abs(n)%2==1){
            if(n==num&&n<0) return 1/(x*myPow(x*x,n/2));
            return x*myPow(x*x,n/2);
        }else{
            if(n==num&&n<0) return 1/myPow(x*x,n/2);
            return myPow(x*x,n/2);   
        }       
    }
    public void check(int n){
        num = n;
    }
}
