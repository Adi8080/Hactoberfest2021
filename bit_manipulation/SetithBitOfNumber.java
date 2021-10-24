package Bit_Manipulation_Algorithms;

import java.util.Scanner;

public class SetithBitOfNumber {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int x, i, mask, result;
		System.out.print("Enter any number : ");
		x = sc.nextInt();
		
		System.out.print("Enter the bit number : ");
		i = sc.nextInt();
		
		mask = (1 << i);
		
		result = (x | mask);
		
		System.out.print("Final answer obtained after the bit is set : "+result);
		
		sc.close();
		
	}
}
