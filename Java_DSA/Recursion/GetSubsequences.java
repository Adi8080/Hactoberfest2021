
import java.util.ArrayList;

//subseqnces of string using arraylist ,for any string their will be
//always 2^n sunbsequnces,order of character matters in case of subsequecnes
public class GetSubsequences {
    
    public static ArrayList<String> getsub(String s){
        
        if(s.length()==0){
            
            ArrayList<String> baseresult=new ArrayList<>();
            baseresult.add("");
            return baseresult;
        }
        
        char cc=s.charAt(0);
        
         String ros=s.substring(1);
         ArrayList<String> myresult =new ArrayList<>();
         
         ArrayList<String> recResult=getsub(s.substring(1));
         
         for(int i=0;i<recResult.size();i++){
             
             myresult.add(recResult.get(i));
             myresult.add(cc + recResult.get(i));
         }
        
         return myresult;
    }

    
    public static void main(String[] args) {
        
        System.out.println(getsub("abc"));
       
    }
    
}
