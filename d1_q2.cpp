//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
		vector<string> AllPossibleStrings(string s){
		    int n=s.size();
		    int index=0;
		    vector<string> result;
		    for(int i=0;i<=(1<<n)-1;i++){    //000 001 010 011 100 101 110 111
		        string temp="";
		        for(int bit=0;bit<n;bit++){
		            if(i&(1<<bit)){
		                temp=temp+s[bit];
		            }
		        }
		        if(temp.size()){
		           result.push_back(temp);  
		        } 
		    }
		    sort(result.begin(),result.end());
		    return result;
		    
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends
