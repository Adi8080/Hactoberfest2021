//Seive of Erathosis -efficient method to check weather no. is or are prime or not
import java.util.*;
public class Seiveof {
    
    public static void seiveof(int n){
        
         
        boolean primes[]=new boolean[n+1];
        
        Arrays.fill(primes,true);
        
        primes[0]=primes[1]=false;
        
        for(int table=2;table*table<=n;table++){
            
            if(primes[table]==false){
                continue;
            }
            
            for(int mul=2;table*mul<=n;mul++){
                primes[table*mul]=false;
            }
        }
        
        for(int i=0;i<n;i++){
            if(primes[i]){
                System.out.println(i);
            }
        }
        
    }

    
    public static void main(String[] args) {
       
        seiveof(1000);
    }
    
}
