class Solution{
    public:
    void heapify(int index,vector<int>&arr,int n){
        int largest=index;
   int left=2*index+1;int right=2*index+2;
   if(left<n&&arr[largest]<arr[left])largest=left;
   if(right<n&&arr[largest]<arr[right])largest=right;
   if(index!=largest){
   swap(arr[largest],arr[index]);
   heapify(largest,arr,n);}
    }
    
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
       vector<int>ans;
       for(int i=0;i<n;i++)ans.push_back(a[i]);
       for(int i=0;i<m;i++)ans.push_back(b[i]);
       int size=n+m;
         for(int i=size/2-1 ; i>=0;i--){
            heapify(i,ans,size);
        }
       return ans;
    }
};