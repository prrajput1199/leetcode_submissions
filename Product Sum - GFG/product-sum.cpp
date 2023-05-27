//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
    long long int countDigits(long long int a, long long int b) { 
        long long ans=a*b;
        int count=0;
        while(ans!=0){
            int digit=ans%10;
            ans=ans/10;
            count++;
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int a,b;
        cin >> a >> b;
        Solution ob;
        cout << ob.countDigits(a, b) << endl;
    }
    return 0;
}

// } Driver Code Ends