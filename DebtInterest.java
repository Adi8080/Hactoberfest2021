import java.util.Scanner;
public class DebtInterest{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter no. of months to clear debt");
        int a=sc.nextInt();
        int loan=100000;
            double intr=(loan/100)*4;
        int t_amt;
        t_amt=loan+(a*(int)intr)+(a-1)*1000;
        System.out.println("Amount of debt\n"+t_amt);
    }
}
