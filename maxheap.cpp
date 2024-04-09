//O(n) step down max heap building 
//vishal kumar 09/04/2024
#include <bits/stdc++.h>
using namespace std;
void heapify(int index,int arr[],int n){
   int largest=index;
   int left=2*index+1;int right=2*index+2;
   if(left<n&&arr[index]<arr[left])largest=left;
   if(right<n&&arr[index]<arr[right])largest=right;
   if(index!=largest){
   swap(arr[largest],arr[index]);
   heapify(largest,arr,n);}
}
 void buildmaxheap(int arr[],int n){
     for(int i=n/2-1;i>=0;i--){
         heapify(i,arr,n);
     }
 }
int main() {
	int arr[]={40,32,20,18,31,12,19,15,17,13,84};
	buildmaxheap(arr,11);
	for(int i=0;i<11;i++){
	    cout<<arr[i]<<" ";
	}
	return 0;
}