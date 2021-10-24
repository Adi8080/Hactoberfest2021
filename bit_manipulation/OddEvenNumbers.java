package Bit_Manipulation_Algorithms;

import java.util.*;

public class OddEvenNumbers {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int a;
		
		System.out.print("Enter first number : ");
		a = sc.nextInt();
		
		if((a & 1) == 0)
		{
			System.out.println(a+" is an Even number");
		}
		else
		{
			System.out.println(a+" is a Odd number");
		}
		sc.close();
	}

}
