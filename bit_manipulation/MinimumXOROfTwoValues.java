package Bit_Manipulation_Algorithms;

import java.util.*;

public class MinimumXOROfTwoValues {

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
		
		findMinXOR(n, arr);
		
	}
	static void findMinXOR(int n, int arr[])
	{
		Arrays.sort(arr);
		
		ArrayList<String> list = new ArrayList<String>();
		
		int min = Integer.MAX_VALUE;
		int ans = 0;
		for(int i=0;i<n-1;i++)
		{
			ans = arr[i] ^ arr[i+1];
			if(ans <= min)
			{
				min = ans;
				list.add(arr[i] +" " + arr[i+1]);
			}
		}
		System.out.println("Pairs that have minimum XOR value are : ");
		for(String s: list)
		{
			System.out.println(s);
		}
		System.out.println("Minimum XOR value of these pairs is : "+min);
	}
}
