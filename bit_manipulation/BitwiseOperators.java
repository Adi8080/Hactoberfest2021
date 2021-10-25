package Bit_Manipulation_Algorithms;

import java.util.*;

public class BitwiseOperators {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int a, b, temp;
		System.out.print("Enter first number : ");
		a = sc.nextInt();
		
		System.out.print("Enter second number : ");
		b = sc.nextInt();
		
		sc.close();
		// Bitwise AND
		temp = (a & b);
		System.out.println(temp);
		
		// Bitwise OR
		temp = (a | b);
		System.out.println(temp);
		
		// Bitwise NOT
		temp = (~ a);
		System.out.println(temp);
		
		// Bitwise XOR
		temp = (a ^ b);
		System.out.println(temp);
		
		// Left Shift
		temp = (a << b);
		System.out.println(temp);
		
		// Right Shift
		temp = (a >> b);
		System.out.println(temp);
	}
}
