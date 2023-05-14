//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;
 
string to_upper(string in);
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		cout << to_upper(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends



string to_upper(string str){
     for(int i=0;i<str.length();i++){
        if(str[i]>=97 && str[i]<=122){
            str[i]= str[i]-'a'+'A';
        }
    }
    return str;
}