package completeCollectionFramweork;

import java.util.*;

public class LearnArrayDeque {

		public static void main(String[] args) {
				
				ArrayDeque<Integer> q = new ArrayDeque<Integer>();
				
				q.offer(20);
				q.offerFirst(10);
				q.offerFirst(50);
				q.offerLast(30);
				q.offerLast(70);
				
				System.out.println(q);
				
				System.out.println(q.peek());
				
				System.out.println(q.peekFirst());
				
				System.out.println(q.peekLast());

		}
}
