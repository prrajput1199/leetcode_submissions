//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string s)
    {
       stack<char>st;
        

        
        for(auto it:s){
            
            if(it=='(' || it=='{' || it=='['){
                st.push(it);
            }
            
            else{
                
                if(st.size()==0)
                    return false;
                
                char ch =st.top();
                st.pop();
                
                if((it==')' and ch =='(') or
                   (it=='}' and ch =='{') or 
                   (it==']' and ch =='['))
                    continue;
                
                else
                    return false;
                }
            }
        
    
        if(st.size()==0)
            return true;
    
        return false;
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends