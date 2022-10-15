package completeCollectionFramweork;

import java.util.*;
import java.util.Map.Entry;

public class LearnMap {

		public static void main(String[] args) {
				
				Map<String,Integer> numbers = new HashMap<>();
				
				numbers.put("one", 1);
				numbers.put("two", 2);
				numbers.put("three", 3);
				numbers.put("four", 4);
				
//				if(!numbers.containsKey("four"))
//				{
//						numbers.put("four", 100);
//				}
				
				numbers.putIfAbsent("four", 100);
 				
				System.out.println(numbers);
				
				//Iterating in the Map
				//There is a entry class for the elements in the map
				//unique values
				
				for(Map.Entry<String, Integer> e : numbers.entrySet())
				{
						System.out.println(e.getKey() + " - " + e.getValue());
				}
				
				//only keyset
				for(String key :  numbers.keySet())
				{
						System.out.println(key);
				}
				
				//only value set
				for(Integer value : numbers.values())
				{
						System.out.println(value);
				}

				System.out.println(numbers.containsValue(3));
				
				System.out.println(numbers.isEmpty());
				
				numbers.clear();
				
				System.out.println(numbers);
		}
}
