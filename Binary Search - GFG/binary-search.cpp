//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int bs(int* arr, int l, int h, int k)
    {   if(l>h){
        return -1;
         }
        int mid=l+(h-l)/2;
        if(arr[mid]==k){
                return mid;
            }
            if(arr[mid]>k){
                return bs(arr, l, mid-1, k);
            }
            if(arr[mid]<k){
                return bs(arr, mid+1, h, k);
            }
        
    }
    int binarysearch(int arr[], int n, int k) {

        return bs(arr,0, n-1, k);

        // code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}

// } Driver Code Ends