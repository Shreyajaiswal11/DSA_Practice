#include <iostream>
using namespace std;
class minheap{
    public:
    int *arr;
    int size;
    int capacity;
    minheap(int c){
        size=0;
        capacity=c;
        arr=new int[c];
    }
    
    void insert(int val){
        if(size==capacity)
        cout<<"heap full";
        size++;
        int i=size-1;
        arr[i]=val;
        while(i!=0 && arr[(i-1)/2]>arr[i])
        {
            swap(arr[(i-1)/2],arr[i]);
            i=(i-1)/2;
        }
    }
    void heapify(int i){
        int l=(2*i)+1;
        int r=(2*1)+2;
        int smallest=i;
        if(l<size && arr[l]<arr[i])
        smallest=l;
        if(r<size && arr[r]<arr[smallest])
        smallest=r;
        if(i!=smallest){
            swap(arr[i],arr[smallest]);
            heapify(smallest);
        }
    }
    int extractmin(){
        if(size<=0)
        cout<<"stack empty";
        if(size==1){
            size--;
            return arr[0];
        }
        int root=arr[0];
        arr[0]=arr[size-1];
        size--;
        heapify(0);
        return root;
    }
    void print(){
        for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
    }
  void  decresekey(int i,int val){
    arr[i]=val;
    while(i!=0 && arr[(i-1)/2]>arr[i]){
    swap(arr[(i-1)/2],arr[i]);
    i=(i-1)/2;
    }
    }
  void  deletekey(int i){
    decresekey(i,-1);
    extractmin();
    }
};
int main() {
	minheap h(7);
	h.insert(4);
	h.insert(8);
	h.insert(1);
	h.insert(12);
	h.print();
	h.deletekey(2);
cout<<endl;
h.print();
	return 0;
}
