package Bit_Manipulation_Algorithms;

import java.util.*;

public class OnlyNonRepeatingElementInThriceRepetition {

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
		
		int countArray[] = new int[32];
		int count = 0;
		
		for(int i=0;i<32;i++)
		{
			if(count < num)
			{
				int temp = arr[count];
				int j = 0;
				while(temp != 0)
				{
					int digit = (temp & 1);
				
					temp = temp >> 1;
			
					if(countArray[j] == 0)
					{
						countArray[j] = digit;
					}
					else
					{
						countArray[j] = countArray[j] + digit;
					}
					j++;
				}
				count++;
			}
		}
	
		int storeValues = 0;
		int base = 1;
		for(int i=0;i<32;i++)
		{
			int temp;
			temp = countArray[i] % 3;
			
			if(temp != 0)
			{
				storeValues += temp * base;
			}
			base = base * 10;
		}
		
		int ans = 0;
		int multiply = 1;
		while(storeValues != 0)
		{
			int temp;
			temp = (storeValues & 1);
			ans += temp * multiply;
			multiply = multiply << 1;
			storeValues = storeValues / 10;
		}
		System.out.println("Only Non Repeating number is : "+ans);
	}
}
