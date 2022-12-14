//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
    unordered_map<int,int>m;
        int Max_count=0;
        int current_sum=0;
        
        for(int i=0;i<n;i++)
        {
            current_sum+=A[i];
            
            if(current_sum==0)
            {
                Max_count=i+1;
            }
                
            else
            {
                if(m.find(current_sum)!=m.end())
                {
                 Max_count=max(Max_count,i-m[current_sum]);
                }
                else
                {
                    m[current_sum]=i;
                }
            }
         
        }
        
        return Max_count;
        
    }
    
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends