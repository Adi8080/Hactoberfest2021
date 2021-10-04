
public class PrintRecursionSubsequences {

    public static void printsubseq(String ques, String ans) {
       int count=0;
        if (ques.length() == 0) {
            System.out.print(ans+" ");

            return;
        }

        char cc = ques.charAt(0);
        String ros = ques.substring(1);

        printsubseq(ros, ans);
        printsubseq(ros, ans + cc);
       
        
        
    }

    public static void main(String[] args) {

        PrintRecursionSubsequences p = new PrintRecursionSubsequences();

        p.printsubseq("abcd", "");
    }

}
