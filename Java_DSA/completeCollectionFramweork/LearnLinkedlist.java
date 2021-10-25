package completeCollectionFramweork;

import java.util.*;

public class LearnLinkedlist {

		public static void main(String[] args) {
				
				//LinkedList is a class which implemented multiple Interfaces
				//It implements List and Queue interfaces
				
				Queue<Integer> queue = new LinkedList<>();
				
				queue.offer(12); //to add element in the queue
				queue.offer(24);
				queue.offer(36);
				
				System.out.println(queue);
				
				System.out.println(queue.poll()); //to remove the element from queue
				
				System.out.println(queue);
				
				System.out.println(queue.peek()); //next element to poll in queue
				
				//add, offer
				//add - If the element is not successfully inserted in queue then it throws
				 			 // an exception (dangerous operation)
				//offer - If the element is not successfully inserted in queue then it returns 
							 // false else it returns true (good operation)
				
				//element, peek
				//element - Returns the top element of the queue. If the Queue is empty, it throws
									 // an exception
				//peek - Returns the head/top of the queue. If the queue is empty it returns null
				
				//remove, poll
				//remove - Returns and removes the head of the queue. Throws an exception if 
						   	 		 // queue is empty
				//poll - Returns and removes the head of the queue. Returns null if the queue
							 // is empty

		}
}
