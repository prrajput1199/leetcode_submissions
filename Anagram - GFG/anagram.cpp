//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string s, string t){
        
        unordered_map<char,int>map;
        
        if(s.length()!=t.length()){
            return false;
        }
        
        for(int i=0;i<s.length();i++){
            map[s[i]]++;
        }
        
        for(int i=0;i<t.length();i++){
            
            if(map.find(t[i])!=map.end()){
                map[t[i]]--;
            }
            
            else{
                return false;
            }
        }
        
        for(auto items:map){
           if( items.second!=0){
               return false;
           }
            
        }
        
        return true;
        
    }

};

//{ Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}

// } Driver Code Ends