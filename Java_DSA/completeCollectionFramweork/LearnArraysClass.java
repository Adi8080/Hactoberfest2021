package completeCollectionFramweork;

import java.util.Arrays;

public class LearnArraysClass {

		public static void main(String[] args) {
				
				//work on arrays
//				int a[] = {1,2,3,4,5,6,7,8,9,10};
//				int index = Arrays.binarySearch(a, 3); 
//				
//				System.out.println(index);
				
				int numbers[] = {10,2,32,12,15,76,17,89,56,39};
				Arrays.sort(numbers); //sorting the numbers
				
				
				Arrays.fill(numbers, 17); //filles this values
				for(int i : numbers)
				{
						System.out.println(i);
				}
				
				

		}
}
