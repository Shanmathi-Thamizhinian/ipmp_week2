//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function for finding maximum and value pair
	int maxAND (int arr[], int n)
	{
	    int mask=0;
	    int res=0;
	    for(int i=31;i>=0;i--){
	        mask=(1<<i)|res;
	        int count=0;
	        for(int j=0;j<n;j++){
	            if((mask&arr[j])==mask){
	                count++;
	            }
	        }
	        if(count>=2){
	                res=res|mask;
	         }
	    }
	    return res;
	}
};

//{ Driver Code Starts.
 
// Driver function
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        Solution ob;
        cout <<  ob.maxAND(arr,n)<<endl;
    }
    return 0;
}
// } Driver Code Ends
