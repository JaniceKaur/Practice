class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        unordered_map<int,int> map;
        stack<int> s;
        vector<int> vec;
    
        for(int i=n2-1;i>=0;i--){
            while(!s.empty() && nums2[i]>=s.top())
                s.pop();
            if(s.empty())
                map[nums2[i]]=-1;
            else
                map[nums2[i]]=s.top();
            s.push(nums2[i]);
        }
        for(int i=0;i<n1;i++){
            vec.push_back(map[nums1[i]]);
        }
        return vec;
    }
};