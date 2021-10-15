//in print approach we produce the output simaulatanesouly whenever we call the function
//for samller inputs
public class PrintBoardPath {

    public static void printboard(int curr, int end, String ans) {

        if (curr == end) {//when starting point equals to ending point we
            //then we will print the result
            System.out.println(ans);
            return;
        }

        if (curr > end) {//when curr becomes more than the desired end position
            return;
        }

        for (int dice = 1; dice <= 6; dice++) {

            printboard(curr + dice, end, ans + dice);
        }
    }

    public static void main(String[] args) {

        printboard(0, 10, "");
    }

}
