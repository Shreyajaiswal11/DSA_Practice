#include <bits/stdc++.h>
using namespace std;

class heap{
public:
int capacity;
int size;
int* arr;
heap(int c){
    capacity=c;
    size=0;
    arr=new int[c];
}
void insert(int val){
 if(size==capacity){
 cout<<"Heap full"<<endl;
 return;
 }
 size++;
 int i =size-1;
 arr[i]=val;
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
};

int main() {
heap h(7);
h.insert(8);
h.insert(5);
h.insert(3);
h.insert(9);
h.insert(2);
h.insert(1);
h.display();
	return 0;
}
