package Bit_Manipulation_Algorithms;

import java.util.*;

public class DivideIntegers {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int A, B;
		System.out.print("Enter first number : ");
		A = sc.nextInt();
		System.out.print("Enter second number : ");
		B = sc.nextInt();
		
		int ans = divideIntegers(A, B);
		
		System.out.println(ans);
		
		sc.close();
	}
	static int divideIntegers(int a, int b)
	{
		if(a <= Integer.MAX_VALUE && b==1)
		{
			return a;
		}
		if(a > Integer.MAX_VALUE && b==1)
		{
			return Integer.MAX_VALUE;
		}
		if(b == -1)
		{
			if(a == Integer.MIN_VALUE)
			{
				return Integer.MAX_VALUE;
			}
			else
			{
				return -a;
			}	
		}
		if(a == b)
		{
			return 1;
		}
		int sign  = 1;
		if((a < 0 && b > 0) || (a > 0 && b < 0))
		{
			sign = -1;
		}
		long A = Math.abs((long)a);
		long B = Math.abs((long)b);

		int count = 0;
		while(A != 0)
        {
            if(A >= B)
            {
                A = A - B;
                count++;
                if(count >= Integer.MAX_VALUE)
                {
                	return Integer.MAX_VALUE;
                }
            }
            else
            {
                break;
            }
        }
		if(sign == -1)
		{
			return -count;
		}
		else
		{
			return count;
		}
	}
}
