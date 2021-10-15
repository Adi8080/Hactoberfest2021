
public class PowerinLogn {
    
    public static int Power(int a,int b){
        
        if(b==0){
            return 1;
        }
        
        if(b%2==0){
            return Power(a,b/2)*Power(a,b/2);
        }
        else{
            return a*Power(a,b-1);
        }
    }

   
    public static void main(String[] args) {
       
        System.out.println(Power(5,5));
    }
    
}
