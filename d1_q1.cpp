//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    vector<long long int> twoOddNum(long long int Arr[], long long int N)  
    {
        int setbit;
        vector<long long int> result;
        long long int Xor=0;
        for(long long int i=0;i<N;i++){
            Xor=Xor^Arr[i];
        }
        long long int x=0,y=0;
        setbit=Xor&(~Xor+1);
        for(long long int i=0;i<N;i++){
           if(setbit&Arr[i]){
               x=x^Arr[i];
           }
           else{
               y=y^Arr[i];
           }
        }
        if(x>y){
            result.push_back(x);
            result.push_back(y);
        }
        else{
            result.push_back(y);
            result.push_back(x);
        }
        return result;
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        long long int Arr[N];
        for(long int i = 0;i < N;i++)
        cin>>Arr[i];
        Solution ob;
        vector<long long int>ans=ob.twoOddNum(Arr,N);
        for(long long int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
