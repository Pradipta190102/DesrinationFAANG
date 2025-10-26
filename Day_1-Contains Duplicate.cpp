//leetcode solution
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> sp;
        for(int i=0;i<nums.size();i++)
        {
            if(sp.find(nums[i])!=sp.end())
            {
                return true;
            }
            else
            {
                sp.insert(nums[i]);
            }
        }
        return false;
        
    }
};
