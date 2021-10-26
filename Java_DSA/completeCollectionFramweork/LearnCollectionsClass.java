package completeCollectionFramweork;

import java.util.*;

public class LearnCollectionsClass {

		public static void main(String[] args) {
				
				List<Integer> list = new ArrayList<Integer>();
				
				list.add(34);
				list.add(56);
				list.add(12);
				list.add(3);
				list.add(25);
				list.add(47);
				list.add(78);
				list.add(9);
				list.add(9);
				
//				System.out.println("Max element = " + Collections.max(list));
//				System.out.println("Min element = " + Collections.min(list));
//
//				System.out.println("Frequency = " + Collections.frequency(list, 9));
				
				Collections.sort(list, Comparator.reverseOrder()); //sorts the array in reverse order
				
				System.out.println(list);
				
				
				
		}
}
