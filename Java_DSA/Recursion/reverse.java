import java.util.*;

public class reverse {
    public static void reverseit(int arr[] ,int index)
    { 
        if(index==arr.length)
        {
            return;
        }
        reverseit(arr,index+1);
        System.out.println(arr[index]);

    }

    public static void main(String[] args)
    {
        Scanner scn =new Scanner(System.in);
        int n =scn.nextInt();
        int []arr=new int[n];
        for(int i=0;i<arr.length;i++)
        {
            arr[i]=scn.nextInt();
        }
        reverseit(arr,0);
    }
    
}
