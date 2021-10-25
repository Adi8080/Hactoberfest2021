package completeCollectionFramweork;

import java.util.*;

public class LearnStack {

		public static void main(String[] args) {
			
				//Stack - Last In First out
				Stack<String> animals = new Stack<>();
				
				animals.push("Lion");
				animals.push("Horse");
				animals.push("Dog");
				animals.push("Cat");
				
				System.out.println(animals.peek());
				
				animals.pop();
				
				System.out.println(animals.peek());
				
				Iterator<String> animalsList = animals.iterator();
				
				while(animalsList.hasNext())
				{
						System.out.println("Using Iterator : " + animalsList.next());
				}
		}
}
