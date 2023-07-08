class Solution {
public:
     vector<vector<int>> vv;
    void helper(int n , int k , int i , vector<int> &v){
    
        if(v.size()==k)
        {   
            vv.push_back(v);
            return ;
        }
        for(int j = i+1; j<=n;j++){
            v.push_back(j);
            helper(n,k,j,v);
            v.pop_back();
        }
       
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> v;
        helper(n,k,0,v);
        return vv;
    }
};
