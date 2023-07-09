class Solution {
public:
   vector<vector<string>> vv;
    bool isPalindrome(string s){
        for(int i =0  ; i<s.length()/2;i++){
            if(s[i]!=s[s.length()-i-1])
            return false;
        }
        return true;
    }
    
    void helper(int i ,string s, vector<string> &v){
        if(i==s.length())
        {
            vv.push_back(v);
            return ;
        }
        for(int j=i;j<s.length() ; j++){
            if(isPalindrome(s.substr(i,j-i+1))){
                v.push_back(s.substr(i,j-i+1));
                helper(j+1,s,v);
                v.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string> v;
        helper(0 , s , v);
        return vv;
    }
};
