package completeCollectionFramweork;

import java.util.*;

public class LearnHashset {

		public static void main(String[] args) {
				
//				Set<Integer> set = new HashSet<>(); //hashing is mainly used here
//				
//				set.add(32);
//				set.add(2);
//				set.add(45);
//				set.add(67);
//				set.add(37);
//				set.add(67);
//				
//				System.out.println(set);
//				
//				set.remove(67);
//				
//				System.out.println(set);
//				
//				System.out.println(set.contains(2));
//				
//				System.out.println(set.isEmpty());
//				
//				System.out.println(set.size());
//				
//				set.clear();
//				
//				System.out.println(set);
				
				//LinkedHashSet
				Set<Integer> set = new LinkedHashSet<>(); //hashing is mainly used here
				//also implements the property of linkedlist
				//in order the elements are found here
				//order is maintained
				
				set.add(12);
				set.add(32);
				set.add(2);
				set.add(45);
				set.add(67);
				set.add(37);
				set.add(67);
				
				System.out.println(set);
				
				set.remove(67);
				
				System.out.println(set);
				
				System.out.println(set.contains(2));
				
				System.out.println(set.isEmpty());
				
				System.out.println(set.size());
				
				set.clear();
				
				System.out.println(set);				
		}
}
