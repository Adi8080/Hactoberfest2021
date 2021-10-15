# include <stdio.h>
# include <stdlib.h>
void swap(int *ap,int *bp){
    int temp;
    temp=*ap;
    *ap=*bp;
    *bp=temp;
}

void bubbleSort(int *a,int n){
    int i,j;
    for(i=0;i<n-1;i++){

        for(j=0;j<n-i-1;j++){

            if(a[j]>a[j+1])
                swap(&a[j],&a[j+1]);
        }
    }
}

void printArray(int *a,int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d-",a[i]);
    }
    printf("\n");
}

int main(){   
    int *a;
    int n,i,j;
    
    printf("enter size of array  : \n");
    scanf("%d",&n);
    a=(int*)calloc(n,sizeof(n));
    
    for(i=0;i<n;i++){
        printf("enter element number %d : \n",(i+1));
        scanf("%d",&a[i]);
    }

    printf("The original array is : \n");
    printArray(a,n);
    bubbleSort(a,n);

    printf("The sorted array is :\n ");
    printArray(a,n);
    return 0;
}
