#include <bits/stdc++.h>
using namespace std;
class minheap{
    public:
    int size;
    int capacity;
    int *arr;
    minheap(int c){
        capacity=c;
        size=0;
        arr=new int[c];
    }
    void insert(int val){
        if(size==capacity)
        cout<<"heap full"<<endl;
        size++;
        int i=size-1;
        arr[i]= val;
        while(i!=0 && arr[(i-1)/2]>arr[i]){
            swap(arr[(i-1)/2],arr[i]);
            i=(i-1)/2;
        }
    }
    void display(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
    }
    void minheapify(int i){
        int l=((2*i)+1);
        int r=((2*i)+2);
        int smallest=i;
        if(l<size && arr[l] <arr[i]) smallest=l;
        if(r<size && arr[r]<arr[smallest]) smallest=r;
        
        if(smallest!=i){
            swap(arr[smallest],arr[i]);
            minheapify(smallest);
        }
    }
    int extractmin(){
        if(size<=0) return -1;
        else if(size==1) 
        {
            size--;
            return arr[0];
        }
        int root=arr[0];
        arr[0]=arr[size-1];
        size--;
        minheapify(0);
        return root;
    }
};

int main() {
	minheap h(7);
	h.insert(5);
	h.insert(3);
	h.insert(1);
		h.insert(7);
		
	cout<<h.extractmin()<<endl;
// 	h.display();
	return 0;
}
