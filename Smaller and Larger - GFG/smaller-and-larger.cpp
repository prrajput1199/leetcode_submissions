//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	vector<int> getMoreAndLess(int arr[], int n, int x) {
	    vector<int>v;
	    int count1=0;
	    int count2=0;
	    for(int i=0;i<n;i++){
	        if(arr[i]<=x){
	            count1++;
	        }
	        if(arr[i]>=x){
	            count2++;
	        }
	    }
	    v.push_back(count1);
	    v.push_back(count2);
	    return v;
	    
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
        auto ans = ob.getMoreAndLess(arr, n, x);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}

// } Driver Code Ends