class Solution {
public:
    void findSubSets(int index, vector<int>& nums, vector<int>& temp,vector<vector<int>>& result){
        result.push_back(temp);
        for(int i=index;i<nums.size();i++){
            if(i!=index && nums[i]==nums[i-1]) continue;
            temp.push_back(nums[i]);
            findSubSets(i+1,nums,temp,result);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> temp;
        sort(nums.begin(),nums.end());
        findSubSets(0,nums,temp,result);
        return result;
    }
};
