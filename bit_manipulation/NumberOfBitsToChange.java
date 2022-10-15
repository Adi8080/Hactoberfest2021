package Bit_Manipulation_Algorithms;

import java.util.*;

public class NumberOfBitsToChange {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int x, y, n;
		
		System.out.print("Enter number 1 : ");
		x = sc.nextInt();
		
		System.out.print("Enter number 2 : ");
		y = sc.nextInt();
		
		n = (x ^ y);
		
		// Method 1
//		int count1 = 0;
//		while(n != 0)
//		{
//			if((n & 1) == 1)
//			{
//				count1++;
//			}
//			n = n >> 1;
//		}
//		System.out.print(count1);
		
		// Method 2
		int count2 = 0;
		while(n != 0)
		{
			n = (n & (n - 1));
			count2++;
		}
		System.out.println(count2);
		
		sc.close();
	}
}
