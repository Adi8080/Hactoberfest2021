package com.company;

public class Shell_sort {

    public static void main(String[] args) {
        int[] A ={20,35,-15,7,55,1,-22};
        System.out.println("Before Shell SORT:");
        for(int i: A)
            System.out.print(i +" ");

        for(int gap=A.length/2; gap>0; gap/=2){
            for(int i=gap; i<A.length; i++){
                int n= A[i];

                int j=i;

                while (j>=gap && A[j-gap] > n){
                    A[j]= A[j-gap];
                    j-=gap;
                }

                A[j]=n;

            }
        }


        System.out.println("\nAfter Shell SORT:");
        for(int i: A)
            System.out.print(i+ " ");
    }
}
