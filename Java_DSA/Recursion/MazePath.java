
import java.util.ArrayList;

public class MazePath {

    public static ArrayList<String> mazepath(int cr, int cc, int er, int ec) {

        if (cr == er && cc ==ec ) {
            ArrayList<String> baseresult = new ArrayList<>();
            baseresult.add("");
            return baseresult;
        }

        if (cr > er || cc > ec) {
            ArrayList<String> baseresults = new ArrayList<>();
            return baseresults;
        }

        ArrayList<String> myresult = new ArrayList<>();

        ArrayList<String> rrh = mazepath(cr, cc + 1, er, ec);

        for (String rrhs : rrh) {

            myresult.add("H" + rrhs);
        }

        ArrayList<String> rrv = mazepath(cr + 1, cc, er, ec);

        for (String rrvs : rrv) {

            myresult.add("V" + rrvs);
        }

        ArrayList<String> rrhd = mazepath(cr + 1, cc + 1, er , ec);

        for (String rrds : rrhd) {

            myresult.add("D" + rrds);
        }

        return myresult;
    }

    public static void main(String[] args) {

        System.out.println(mazepath(0, 0, 2, 2).size());
    }

}
