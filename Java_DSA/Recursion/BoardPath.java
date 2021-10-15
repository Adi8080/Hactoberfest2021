
import java.util.ArrayList;


public class BoardPath {

    public static ArrayList<String> boardPath(int curr,int end){
        
        if(curr==end){
            ArrayList<String> baseresult=new ArrayList<>();
            baseresult.add("");
            return baseresult;
        }
        
        if(curr>end){
            ArrayList<String> baseresults =new ArrayList<>();
            return baseresults;
        }
        
        ArrayList<String> myresult=new  ArrayList<>();
       for(int dice=1;dice<=6;dice++){
           
           ArrayList<String> rr=boardPath(curr + dice ,end);
           
           for(String rrs : rr){
               myresult.add(dice + rrs);
           }
       }
       
       return myresult; 
    }
   
    public static void main(String[] args) {
     
        System.out.println(boardPath(0,10).size());
    }
    
}
