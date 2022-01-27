class Solution {
public:
    void Sum(vector<int>& candidates, int target,int idx,vector<int> &vec,vector<vector<int>> &ans)
    {
        if (target==0)
            ans.push_back(vec);
        if(idx==candidates.size())
            return;
        
        for(int i=idx;i<candidates.size();i++)
        {
            
            if(i>idx && candidates[i]==candidates[i-1])
                continue;
            
            if(candidates[i]<=target)
            {
                vec.push_back(candidates[i]);
                Sum(candidates,target-candidates[i],i+1,vec,ans);
                vec.pop_back();
            }
            
        }
        
                
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> vec;
        vector<vector<int>> ans;
        sort(candidates.begin(),candidates.end());
        Sum(candidates,target,0,vec,ans);
        return ans;
    }
};