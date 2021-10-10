import java.util.*;
public class main{
    public static void main(String[]args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int rv=0;
        while(n!=0){
            int a=n%10;
            rv=rv*10 +a;
            n=n/10;
        }
        System.out.println(rv);
    }
}