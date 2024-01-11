class Solution {
public:
    unordered_map <int,string> map;
    string ans="";
    void solve(int index, vector<string>& v, string &digits){
        if(index>=digits.size()){
            v.push_back(ans);
            return;
        }
        int n=digits[index]-'0';
        string s=map[n];
        for(int i=0;i<s.size();i++){
            ans=ans+s[i];
            solve(index+1,v,digits);
            ans.pop_back();
        }
    }
    vector<string> letterCombinations(string digits){
        map[2] = "abc"; 
        map[3] = "def";
        map[4] = "ghi";
        map[5] = "jkl";
        map[6] = "mno";
        map[7] = "pqrs";
        map[8] = "tuv";
        map[9] = "wxyz";
        vector<string> v;
        if(digits.size() == 0)
            return v;
        solve(0,v,digits);
        return v;
    }
};
