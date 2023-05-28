//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
    long long int s=0;
    long long int e=x;
    long long int ans=-1;
    long long int mid=s+((e-s)/2);
    while(s<=e){
        long long int square=mid*mid;
        if(square==x){
            return mid;
        }
        else if(square>x){
            e=mid-1;
        }
        else{
            ans=mid;
            s=mid+1;
        }
        mid=s+((e-s)/2);
    }
    return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}

// } Driver Code Ends