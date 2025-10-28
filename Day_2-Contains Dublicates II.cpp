//Leetcode solution
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        unordered_map<int,int>mp;

        for(int i=0;i<nums.size();i++)
        {
            if(mp.find(nums[i])!=mp.end())
            {
                return true;
            }
            else
            {
                mp[nums[i]]=i;
            }
            if(mp.size()>k)
            {
                mp.erase(nums[i-k]);
            }
        }
        return false;

    }
};
