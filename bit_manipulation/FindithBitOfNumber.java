package Bit_Manipulation_Algorithms;

import java.util.*;

public class FindithBitOfNumber {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		// Method 1
//		int x, i, temp;
//		System.out.print("Enter any number : ");
//		x = sc.nextInt();
//		
//		System.out.print("Enter the bit number : ");
//		i = sc.nextInt();
//		
//		temp = x >> i;
//		
//		if((temp & 1) == 1)
//		{
//			System.out.println("Bit at "+i+"th position of "+x+" is 1.");
//		}
//		else
//		{
//			System.out.println("Bit at "+i+"th position of "+x+" is 0.");
//		}

		// Method 2
		int y, j, mask;
		System.out.print("Enter any number : ");
		y = sc.nextInt();
		
		System.out.print("Enter the bit number : ");
		j = sc.nextInt();
		
		mask = 1 << j;
		System.out.println(mask);
		
		if((mask & y) != 0)
		{
			System.out.println("Bit at "+j+"th position of "+y+" is 1.");
		}
		else
		{
			System.out.println("Bit at "+j+"th position of "+y+" is 0.");
		}
		sc.close();
	}
}
