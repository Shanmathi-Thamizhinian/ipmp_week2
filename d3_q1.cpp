class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> result;
        for(int i=0;i<(1<<n);i++){
            vector<int>temp;
            for(int bit=0;bit<n;bit++){
                if(i&(1<<bit)){
                    temp.push_back(nums[bit]);
                }
            }
            result.push_back(temp);
        }
        return result;
    }
};
