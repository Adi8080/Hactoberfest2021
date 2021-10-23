#include<stdio.h>
void swap(int *xp , int *yp){
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void selectionsort(int arr[],int n){
	int i,j,mid_idx;
	for(i=0;i<n-1;i++)
	{
		mid_idx=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[mid_idx])
			mid_idx=j;
			
		}
		swap(&arr[mid_idx],&arr[i]);
	}
}

void printArray(int arr[],int n){
	printf("Sorted Array. \n");
	for(int i=0;i<n;i++)
	{
		printf("A[%d]=%d",i,arr[i]);
		printf("\n");
	}
}

int main(){
	int arr[]={34,67,32,89,23,70,48};
	int n = sizeof(arr)/sizeof(arr[0]);
	selectionsort(arr,n);
	printArray(arr,n);
	return 0;
	
	
}


















