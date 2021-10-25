package Bit_Manipulation_Algorithms;

import java.util.*;

public class MaximumXOROfTwoValues {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int n;
		System.out.print("Enter the number of elements in the array : ");
		n = sc.nextInt();
	
		int arr[] = new int[n];
		System.out.println("Enter "+n+" elements of the array");
	
		for(int i=0;i<n;i++)
		{
			arr[i] = sc.nextInt();
		}
		
		findMaxXOR(n, arr);
		
		sc.close();
	}
	static void findMaxXOR(int n, int arr[])
	{
		int mask = 0, max = 0;
		
		for(int i=31;i>=0;i--)
		{
			mask = mask |(1 << i);
			
			Set<Integer> set = new HashSet<Integer>();
			
			for(int j=0;j<n;j++)
			{
				set.add(mask & arr[j]);
			}
			int tempMax = max | (1 << i);
			
			for(int nums: set)
			{
				if(set.contains(tempMax ^ nums))
				{
					max = tempMax;
					break;
				}
			}
		}
		System.out.println(max);
	}
}
