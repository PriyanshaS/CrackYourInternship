class Solution {
public:
    vector<vector<int>> vv;
    void helper(int i,vector<int>& candidates,int target, vector<int>& v){
        if(target<0)
        return ;
        if(target==0){
            vv.push_back(v);
            return;
        }
    

        for(int j=i ; j<candidates.size() ;j++){
            if(j>i && candidates[j]==candidates[j-1])
            continue;
            v.push_back(candidates[j]);
            helper(j+1 , candidates , target-candidates[j],v);
            v.pop_back();
            
        } 
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {       sort(candidates.begin() , candidates.end());
        vector<int> v ;
        helper(0 , candidates , target , v);
        return vv;
    }
};
