class Solution {
public:
    vector<vector<int>> vv;
    void helper(vector<int>& nums , vector<int>& v , int i){
        if(i==nums.size())
        {vv.push_back(v);
        return ;}
        v.push_back(nums[i]);
        helper(nums,v,i+1);
        v.pop_back();
        int x = nums[i];
        while(i<nums.size() && x==nums[i]){
            i++;
        }
        helper(nums,v,i);

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> v;
        sort(nums.begin() , nums.end());
        helper(nums , v, 0);
        return vv;
    }

    
};
