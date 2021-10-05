import java.util.*;
public class Kthsmallestelement
{
	public static void main(String[] args) 
	{
	    Scanner sc = new Scanner(System.in);
	    System.out.println("Enter size of array:");
	    int n = sc.nextInt();
	    System.out.println("Enter elements of array");
	    int ar[] = new int[n];
	    for(int i = 0;i<n;i++)
	    {
	        ar[i] = sc.nextInt();
	    }
	    System.out.println("Enter the kth positon to find the element in array");
	    int k = sc.nextInt();
	    Arrays.sort(ar);
	    System.out.println(ar[k-1]);
	}
}
