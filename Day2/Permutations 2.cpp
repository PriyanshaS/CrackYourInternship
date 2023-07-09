class Solution {
public:
    vector<vector<int>> vv;
    void helper(int i , vector<int> nums){
        if(i==nums.size()){
            vv.push_back(nums);
            return ;
        }
        for(int j = i ; j<nums.size();j++){
            if(nums[i]==nums[j] && i!=j)
              continue;
                swap(nums[i],nums[j]);
                helper(i+1,nums);
               
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<int> v;
        sort(nums.begin() , nums.end());
        helper(0,nums);
        return vv;
    }
};
