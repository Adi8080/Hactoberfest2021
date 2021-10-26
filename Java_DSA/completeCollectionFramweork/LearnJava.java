package completeCollectionFramweork;

import java.util.*;

public class LearnJava {

		public static void main(String[] args) {
				
				ArrayList<Integer> students = new ArrayList<>();
				
				students.add(10);
				students.add(20);
				students.add(30);
				students.add(40);
				
				//Initially the size of ArrayList is 10
				//When those 10 (n) elements are it increases its size by (n + n/2 + 1)
				//n - number of elements when the capacity of arraylist becomes full
						
				students.add(2, 100);
				
				System.out.println(students);
				
				//Iterating in the List
				for(int x : students)
				{
					System.out.println("The element is : " + x);
				}
				
				//Using Iterator
				Iterator<Integer> it = students.iterator();
				
				while(it.hasNext())
				{
					System.out.println("Using Iterator : " + it.next());
				}
				
//				students.set(4, 600);
				
//				System.out.println(students.contains(40));
			
//				System.out.println(students);
	
//				students.remove(2); //Removes the element at that index
//				students.remove(Integer.valueOf(67)); //Removes the specific element which is mentioned
	
//				System.out.println(students);
	
//				students.clear(); //Removes all the elements from the current list
			
//				System.out.println(students);

		}
}
