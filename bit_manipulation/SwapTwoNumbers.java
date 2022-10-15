package Bit_Manipulation_Algorithms;

import java.util.*;

public class SwapTwoNumbers {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int a, b;
		
		System.out.print("Enter first number : ");
		a = sc.nextInt();
		
		System.out.print("Enter second number : ");
		b = sc.nextInt();
		sc.close();
		
		System.out.println("Numbers before swapping are : a = "+a+", b = "+b);
		a = a ^ b;
		b = a ^ b;
		a = a ^ b;
		
		System.out.println("Numbers after swapping are : a = "+a+", b = "+b);
	}
}
