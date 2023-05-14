//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
          bool Vowels(char ch)
    {
            if(ch=='a' || ch=='e' ||ch=='i'||ch=='o'|| ch=='u'||
               ch=='A' || ch=='E' ||ch=='I'||ch=='O'|| ch=='U' )
               {
                return true;
               }
            else{
                return false;
            }

    }
        string modify (string s)
        {
             int i=0;
        int j=s.length()-1;

        while(i<=j){
            if(Vowels(s[i])==false){
                i++;
            }
            if(Vowels(s[j])==false){
                j--;
            }
            else if(Vowels(s[i])==true && Vowels(s[j])==true){
                swap(s[i],s[j]);
                i++;
                j--;
            }
        }

        return s;
        }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.modify (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends