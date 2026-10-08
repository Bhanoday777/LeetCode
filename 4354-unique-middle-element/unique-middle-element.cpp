class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {

        unordered_map<int,int> mp;
        int mid;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }

        mid=(nums.size()-1)/2;
        for(auto it:mp)
        {
            if(nums[mid]==it.first && it.second==1)
                return true;
        }

        return false;


        
    }
};