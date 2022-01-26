class Solution {
public:
    void Sum(vector<int>& candidates, int target,int idx,vector<int> &vec,vector<vector<int>> &ans)
    {
        if(idx==candidates.size()){
            if (target==0)
                ans.push_back(vec);
            return;
        }
        
        if(candidates[idx]<=target)
        {
            vec.push_back(candidates[idx]);
            Sum(candidates,target-candidates[idx],idx,vec,ans);
            vec.pop_back();
        }
        
        Sum(candidates,target,idx+1,vec,ans);
                
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> vec;
        vector<vector<int>> ans;
        Sum(candidates,target,0,vec,ans);
        return ans;
    }
};