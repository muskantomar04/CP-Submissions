class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        //BRUTE FORECE, time=O(n^2), space=0(1)
        /*vector<int> ans;
        for(int i=0; i<nums.size(); i++)
        {
            for(int j=i+1; j<nums.size(); j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    ans.push_back(i);
                    ans.push_back(j);
                }
            }
        }
        return ans;  /
        
        
        //OPTIMIZED, time=O(n), space=0(n)
        /*vector<int> ans;
        unordered_map<int,int> m;
        for(int i=0; i<nums.size(); i++)
        {
            if(m.find(target-nums[i])!=m.end())
            {
                ans.push_back(i);
                ans.push_back(m[target-nums[i]]);
                return ans;
            }
            m[nums[i]] = i;
        }
        return ans;  */
    }
};