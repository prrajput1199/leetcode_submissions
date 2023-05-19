//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int search(int nums[], int left, int right, int target){

      int mid= left + (right - left) / 2;
      while(left <= right){
        if(nums[mid] == target)
         return mid;
        if(nums[mid] >= nums[left]) {
          if(target >= nums[left] && target <= nums[mid])
            {
                right = mid - 1;
            }
           else left = mid + 1;
        } 
        else {
          if(target >= nums[mid] && target <= nums[right]) 
            left = mid + 1;
          else right = mid - 1;
        }
          mid = left + (right - left) / 2;
      }
      return -1;
    }
};

//{ Driver Code Starts. 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for(int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
return 0;
}
// } Driver Code Ends