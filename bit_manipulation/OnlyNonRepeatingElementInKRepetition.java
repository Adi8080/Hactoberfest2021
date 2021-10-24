package Bit_Manipulation_Algorithms;

import java.util.*;

public class OnlyNonRepeatingElementInKRepetition {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int num, k;
		System.out.print("Enter the number of elements in the array : ");
		num = sc.nextInt();
		
		System.out.print("Enter the number of times each element repeats in array (except one): ");
		k = sc.nextInt();
		
		int arr[] = new int[num];
		System.out.println("Enter "+num+" elements of the array");
		
		for(int i=0;i<num;i++)
		{
			arr[i] = sc.nextInt();
		}
		
		int ans = findUnique(num, k, arr);
		
		System.out.println("Only Non Repeating element in the array "+k+" times is : "+ans);
		
		sc.close();
	}
	static int findUnique(int numbers, int k, int arr[])
	{	
		int countArray[] = new int[32];
		
		for(int i=0;i<32;i++)
		{
			for(int j=0;j<numbers;j++)
			{
				if((arr[j] & (1 << i)) != 0)
				{
					countArray[i] += 1;
				}
			}
		}
		int ans = 0;
		
		for(int i=0;i<32;i++)
		{
			ans += (countArray[i] % k) * (1 << i);
		}
		return ans;
	}
}
