// find the only non-repeating element in an array where other elements occur three times.
package BitManipulation;
import java.util.*;
import java.lang.*;

public class oneELement_occursOnce_whileOthers_occur_thrice {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter n:");
        int n = sc.nextInt();
        System.out.println("Enter "+n+" elements of the array:");
        int[] a = new int[n];
        for(int i=0 ; i<n ; i++){
            a[i] = sc.nextInt();
        }

        int tn = Integer.MAX_VALUE, tnp1 = 0, tnp2 = 0;    // Creating 3 variables for storing
        // tn = number % 3 == 0   Initialize it with Max value of int.
        // tnp1 = number % 3 == 1
        // tnp2 = number % 3 == 2

        for(int i=0 ; i<a.length ; i++){
            // common bits can be found by AND operator
            int cwtn = a[i] & tn;   // cwntn means common bits of a[i] with tn
            int cwtnp1 = a[i] & tnp1;   // common with tnp1
            int cwtnp2 = a[i] & tnp2;   // common with tnp2


            // if any bit which is set(1) in cwtn then the same bit will be set in tnp1 variable
            // and the same bit will be updated in tn variable and now put the remaining bits in tn variable as before.

            tn = tn & (~cwtn);  // setting tn bits off(0).
            tnp1 = tnp1 | cwtn; // setting tnp1 bits 1.


            // doing same with tnp1 and tnp2.
            tnp1 = tnp1 & (~cwtnp1);
            tnp2 = tnp2 | cwtnp1;


            // doing same with tnp2 and tn.

            tnp2 = tnp2 & (~cwtnp2);
            tn = tn | cwtnp2;
        }

        System.out.println("The only element which occurs once is : "+tnp1);
    }
}
