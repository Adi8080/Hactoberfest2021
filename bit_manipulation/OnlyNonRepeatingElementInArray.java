package Bit_Manipulation_Algorithms;

import java.util.*;

public class OnlyNonRepeatingElementInArray {

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
		
		int ans = 0;
		for(int i=0;i<num;i++)
		{
			ans = ans ^ arr[i];
		}
		System.out.println("Only non repeating element in the array is : "+ans);
	}
}
