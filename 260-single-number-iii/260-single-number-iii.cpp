class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> ans;
        int x=0;
        for(int i=0; i<nums.size(); i++)
            x=x^nums[i];
        int x1=0, x2=0;
        int mask=1;
        while((x&mask) == 0)
            mask = mask<<1;
        for(int i=0; i<nums.size(); i++)
        {
            if((nums[i]&mask)>0)
            x1=x1^nums[i];
            else
            x2=x2^nums[i];
        }
        ans.push_back(x1);
        ans.push_back(x2);   
    return ans;  
    }
};