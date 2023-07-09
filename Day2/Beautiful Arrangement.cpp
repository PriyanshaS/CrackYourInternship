class Solution {
public:
  
    int c=0;
    void helper(int i , vector<int>& nums){
        if(i==nums.size()){
           
            c++;
            return;
        }
      
        for(int j=i;j<nums.size() ; j++){
            if(nums[j]%(i+1)==0 || (i+1)%nums[j]==0)
            {
                swap(nums[j], nums[i]);
                helper(i+1 , nums);
                swap(nums[i] , nums[j]);
            }
        }

    }
    int countArrangement(int n) {
        vector<int> nums;
        for(int i =0 ; i< n ;i++){
            nums.push_back(i+1);
        }
        helper(0 , nums);
        return c;
    }
};
