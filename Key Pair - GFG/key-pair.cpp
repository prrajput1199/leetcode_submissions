//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int nums[], int n, int target) {
        int s=0;
        int e=n-1;
        int sum=0;
        sort(nums,nums+n);
        
        while(s<e)
        {
            sum=nums[s]+nums[e];
            
            if(sum==target){
                return true;
            }
            else if(sum > target){
                e--;
            }
            else{
                s++;
            }
        }
        
        return false;
        
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.hasArrayTwoCandidates(arr, n, x);
        cout << (ans ? "Yes\n" : "No\n");
    }
    return 0;
}

// } Driver Code Ends