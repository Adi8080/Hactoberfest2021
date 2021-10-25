package completeCollectionFramweork;

import java.util.*;

public class LearnTreeset {

		public static void main(String[] args) {
				
				Set<Integer> set = new TreeSet<Integer>();
				//implements bst and unique 
				
				set.add(32);
				set.add(2);
				set.add(45);
				set.add(1);
				set.add(12);
				set.add(67);
				
				System.out.println(set);
				
				set.remove(67);
				
				System.out.println(set);
				
				System.out.println(set.contains(2));
				
				System.out.println(set.isEmpty());
				
				System.out.println(set.size());
				
				set.clear();
				
				System.out.println(set);
				
				//HashSet uses the equals method to check whether a object is different from
				//that already present in the set. 
				
				//To make hashset of a custom class, we need to define the hashcode and the 
				//equals methods which are present in the object class. 
				
				
				
		}
}
