package Bit_Manipulation_Algorithms;

import java.util.*;

public class ReverseBits {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		long num;
		System.out.print("Enter any number : ");
		num = sc.nextLong();
		
		long digits = 31;
		long ans = 0;
		
		while(num != 0)
		{
			ans += (num & 1) << digits;
			num = num >> 1;
			digits--;
		}
		System.out.println(ans);
		
		sc.close();
	}
}
