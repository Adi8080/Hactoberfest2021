
public class PrintPermutations {

    public static void printperm(String ques, String ans) {

        if (ques.length() == 0) {
            System.out.println(ans);
            return;
        }

        for (int i = 0; i < ques.length(); i++) {
            char cc = ques.charAt(i);
            String ros = ques.substring(0, i) + ques.substring(i + 1)
            ;
        
            
            printperm(ros, ans + cc);
        }

    }

    public static void main(String[] args) {

        printperm("abc", "");
    }

}
