//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
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
    
	string removeVowels(string S) 
	{
	    int i=0;

        while(i<=S.length()){
            if(Vowels(S[i])==true){
                S.erase(i,1);
                i--;
            }
             i++;
        }
        
        return S;
	}
};

//{ Driver Code Starts.


int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	string tc;
   	getline(cin, tc);
   	t = stoi(tc);
   	while(t--)
   	{
   		string s, ch; 

	    getline(cin, s);  
   		
       
   		Solution ob;
   		cout << ob.removeVowels(s) << "\n";
   		
   	}

    return 0;
}
// } Driver Code Ends