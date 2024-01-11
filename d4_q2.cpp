class Solution {
public:

    void recurfunc(int index, vector<vector<int>>& ans, vector<int> nums, int size){
        if(index == size-1){
            ans.push_back(nums);
            return;
        }
        for(int i=index;i<size;i++){
            if(i!=index && nums[index]==nums[i]) continue;
            swap(nums[i],nums[index]);
            recurfunc(index+1,ans,nums,size);
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        recurfunc(0,ans,nums,nums.size());
        return ans;
    }
};
