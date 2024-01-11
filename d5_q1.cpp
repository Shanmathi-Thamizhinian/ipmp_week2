//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
    public:
    void helper(int N, int from, int to, int aux, long long int& steps){
        if(N==0){
            return;
        }
        helper(N-1,from,aux,to,steps);
        cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<<to<<endl;
        steps++;
        helper(N-1,aux,to,from,steps);
    }
    
    long long toh(int N, int from, int to, int aux) {
        // Your code here
        long long int steps=0;
        helper(N,from,to,aux,steps);
        return steps;
        
    }

};

//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;//testcases
    while (T--) {
        
        int N;
        cin >> N;//taking input N
        
        //calling toh() function
        Solution ob;
        
        cout << ob.toh(N, 1, 3, 2) << endl;
    }
    return 0;
}



// } Driver Code Ends
