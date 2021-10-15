
import java.util.ArrayList;


public class GetPermutation {
    
    public static ArrayList<String> getpermutation(String s){
        
        if(s.length()==0){
            ArrayList baseresult=new ArrayList<>();
            
            baseresult.add("");
            return baseresult;
        }
        
        char cc=s.charAt(0);
        
        String ros=s.substring(1);
        
        ArrayList<String> myresult=new ArrayList<>();
        
        ArrayList<String> recResult=getpermutation(ros);
        
        for(String rrs :recResult){
            
            for(int i=0;i<=rrs.length();i++){
                
                myresult.add(rrs.substring(0,i) + cc + rrs.substring(i));
            }
        }
        return myresult;
    }

   
    public static void main(String[] args) {
      
        System.out.println(getpermutation("abc"));
    }
    
}
