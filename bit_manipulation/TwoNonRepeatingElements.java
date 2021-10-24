package Bit_Manipulation_Algorithms;

import java.util.*;

public class TwoNonRepeatingElements {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int num;
		System.out.print("Enter the number of elements in the array : ");
		num = sc.nextInt();
		
		int arr[] = new int[num];
		System.out.println("Enter "+num+" elements of the array");
		
		for(int i=0;i<num;i++)
		{
			arr[i] = sc.nextInt();
		}
		sc.close();
		
		int temp1 = 0;
		for(int i=0;i<num;i++)
		{
			temp1 = temp1 ^ arr[i];
		}
		
		// Method 1
//		int temp2 = temp1;
//		
//		int setBitPosition = 0;
//		while(temp1 != 0)
//		{
//			if((temp1 & 1) == 1)
//			{
//				break;
//			}
//			temp1 = temp1 >> 1;
//			setBitPosition++;
//		}
//		
//		int num1 = temp2, num2 = 0;
//		for(int i=0;i<num;i++)
//		{
//			int temp = arr[i];
//			
//			int var = (1 << setBitPosition);
//			
//			if((temp & var) != 0)
//			{
//				num1 = num1 ^ temp;
//			}
//		}
//		num2 = temp2 ^ num1;
//		
//		System.out.println("First Non Repeating number is : "+num1);
//		System.out.print("Second Non Repeating number is : "+num2);
		
		
		// Method 2
		int sum = 0, num1 = 0, num2 = 0;
		sum = (temp1 & -temp1);
		
		for(int i=0;i<num;i++)
		{
			if((sum & arr[i]) > 0)
			{
				num1 = num1 ^ arr[i];
			}
			else
			{
				num2 = num2 ^ arr[i];
			}
		}
		System.out.println("First Non Repeating number is : "+num1);
		System.out.println("Second Non Repeating number is : "+num2);
	}
}
