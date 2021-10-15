import java.lang.Math ;

public class Search {
	static int binary_search(int arr[],int start, int end, int key){
		if(start <= end){
			int mid = (start + end) / 2 ;
			if(arr[mid] == key)
				return mid ;
			else if(arr[mid] > key)
				return binary_search(arr,start,mid-1,key);
			else if(arr[mid] < key)
				return binary_search(arr,mid+1,end,key);
		}
		return -1 ;
	}

	static int exponential_search(int arr[],int n, int x){
		if(arr[0] == x)
			return 0 ;
		int i = 1 ;
		while(i < n && arr[i] <= x)
			i = i*2 ;
		return binary_search(arr,i/2,(int)Math.min(i,n-1),x);
	}

	public static void main(String ...s){
		int arr[]= {1,3,5,7,9,13,19,30};
		int key = 13;
		int index  = exponential_search(arr, arr.length, key);
		System.out.println("-----EXPONENTIAL SEARCH-----");
		System.out.print("The key " + key + " ");
		System.out.print((index == -1) ? "doesn't exist in the Array." : ("is present at index: " + index));

	}
}