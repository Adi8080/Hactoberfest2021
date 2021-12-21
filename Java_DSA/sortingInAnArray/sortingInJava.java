package dsa;
import java.util.Scanner;
public class sortingInJava
{
    public static void main(String[] args)
    {
        int n, temp;
        Scanner s = new Scanner(System.in);
        System.out.print("Enter the number of elements: ");
        n = s.nextInt();
        int a[] = new int[n];
        System.out.println("Enter the elements of the array: ");
        for (int i = 0; i < n; i++)
        {
            a[i] = s.nextInt();
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] < a[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        System.out.println("Array elements in descending order:");
        for (int i = 0; i < n - 1; i++)
        {
            System.out.println(a[i]);
        }
        System.out.print(a[n - 1]);
    }
}  