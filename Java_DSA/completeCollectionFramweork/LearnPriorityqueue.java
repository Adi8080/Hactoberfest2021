package completeCollectionFramweork;

import java.util.*;

public class LearnPriorityqueue {

		public static void main(String[] args) {
				
				//Min and Max Heap
				
//				Queue<Integer> pq = new PriorityQueue<>();
//				
//				pq.offer(40);
//				pq.offer(12);
//				pq.offer(36);
//				pq.offer(67);
//				
//				System.out.println(pq);
//				
//				System.out.println(pq.poll());
//				
//				System.out.println(pq);
//				
//				System.out.println(pq.peek());
				
				//offer(), peek(), poll() functions are preferred to use in contests
				
				Queue<Integer> pq2 = new PriorityQueue<>(Comparator.reverseOrder()); //max heap
				
				pq2.offer(10);
				pq2.offer(40);
				pq2.offer(12);
				pq2.offer(36);
				pq2.offer(67);
				
				System.out.println(pq2);
				
				System.out.println(pq2.poll());
				
				System.out.println(pq2);
				
				System.out.println(pq2.poll());

		}
}
