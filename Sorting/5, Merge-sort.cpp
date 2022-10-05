- It is a divide and conquer algorithm.
- It divide input array into two halves, calls itself for the two halves recursivly and then merge the two sorted halves.
- TC- o(nlogn)
  
  #include <iostream>
using namespace std;
void merge(int *arr,int l,int m,int r){
    int temp[r];
    int i=l, j=m+1,k=l;
    while(i<=m && j<=r){
        if(arr[i]<arr[j])
        {
            temp[k++]=arr[i++];
        }
        else
        temp[k++]=arr[j++];
    }
    while(i<=m){
        temp[k++]=arr[i++];
    }
    while(j<=r){
        temp[k++]=arr[j++];
    }
    for(int it=l;it<=r;it++){
        arr[it]=temp[it];
    }
}
void mergesort(int *arr,int l,int r){
    if(l<r){
        int m=(l+r)/2;
        mergesort(arr,l,m);
        mergesort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}
int main() {
	int arr[]={4,2,1,5,9,6,8};
	int n=sizeof(arr)/sizeof(arr[0]);
	mergesort(arr,0,n-1);
	for(int i=0;i<n;i++){
	    cout<<arr[i]<<" ";
	}
	return 0;
}
