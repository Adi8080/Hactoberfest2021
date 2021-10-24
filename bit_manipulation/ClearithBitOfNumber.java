package Bit_Manipulation_Algorithms;

import java.util.*;

public class ClearithBitOfNumber {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int x, i, var, mask, result;
		
		System.out.print("Enter any number : ");
		x = sc.nextInt();
		
		System.out.print("Enter the bit number : ");
		i = sc.nextInt();
		
		var = (1 << i);
		
		mask = ~(var);
		
		result = (x & mask);
		
		System.out.println("Final answer obtained after the bit is cleared : "+result);
		
		sc.close();

	}
}
