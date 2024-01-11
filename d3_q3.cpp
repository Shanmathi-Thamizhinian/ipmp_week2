//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
public:
    int countWays(string S1, string S2){
        int m = S1.length(), n = S2.length();
        int arr[m+1][n+1];
        for(int i=0;i<m+1;i++)
        {
            for(int j=0;j<n+1;j++)
            {
                if(i==0) arr[i][j] = 0;
                if(j==0) arr[i][j] = 1;
            }
        }
        long long count = 0, ans = 0, mod = 1e9 + 7;
        for(int i=1;i<m+1;i++)
        {
            for(int j=1;j<n+1;j++)
            {
                if(S1[i-1] == S2[j-1])
                {
                    arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
                }
                else arr[i][j] = arr[i-1][j];
                arr[i][j] %= mod;
            }
        }
        return arr[m][n]%mod;
    }
};


//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        string S1, S2;
        cin>>S1;
        cin>>S2;
        
        Solution ob;
        cout<<ob.countWays(S1, S2)<<endl;
    }
    return 0;
}
// } Driver Code Ends
