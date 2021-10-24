#include<stdio.h>
int insertsort(int arr[], int n){
	int i,j,key;
	for(i=1;i<n;i++){
		key=arr[i];
		j=i-1;
		while(arr[j]>key&&j>=0){
			arr[j+1]=arr[j];
			--j;
		}
		arr[j+1]=key;
	}
}

int main()
{
	int n,arr[20],i;
	printf("Enter Size of array that you want :");
	scanf("%d",&n);
	printf("Enter elements :");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	insertsort(arr,n);
	printf("Sorted array :");
	for(i=0;i<n;i++){
		printf("\t %d",arr[i]);
	}
}
	
	
