package completeCollectionFramweork;

import java.util.*;

public class LearnTreeMap {

		public static void main(String[] args) {
				
				Map<String,Integer> numbers = new TreeMap<>();
				
				numbers.put("three", 3);
				numbers.put("four", 4);
				numbers.put("six", 20);
				numbers.put("five", 35);
				numbers.put("one", 1);
				numbers.put("two", 2);
				
				//treemap sorts on the basis of the key like the bst (binary search tree)
				//natural ordering - dictionary type - lexicographic ordering
				
				//operations here are in O(logn) whereas in hashmap they are of O(1).
				
				numbers.remove("three");
				
				System.out.println(numbers);
		}
}
