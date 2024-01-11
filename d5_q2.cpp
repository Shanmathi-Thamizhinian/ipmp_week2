//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
/*You are required to complete this method */

class Solution
{
    public:
    int josephus(int n, int k)
    {
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            arr[i]=i+1;
        }
        int index=0;
        while(arr.size()>1){
            index=(index+k-1)%arr.size();
            arr.erase(arr.begin() + index);
        }
        return arr[0];
    }

};



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n,k;
		cin>>n>>k;//taking input n and k
		
		//calling josephus() function
		Solution ob;
		cout<<ob.josephus(n,k)<<endl;
	}
	return 0;
}
// } Driver Code Ends
