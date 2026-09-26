class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        vector<int> freq;
        vector<int> res;
        vector<int> v;
        int j=0;
        if(nums.size()==1)
            return nums;
        unordered_map<int,int> mp;

        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(auto it:mp)
        {
            freq.push_back(it.second);       
        }

        for(int i=0;i<freq.size();i++)
        {
            if(find(v.begin(),v.end(),freq[i])==v.end())
                v.push_back(freq[i]);
        }

        sort(v.begin(),v.end(),greater<int>());

        while(j<v.size() && k>0)
            {
                for(auto it:mp)
                {
                    if(v[j]==it.second)
                    {
                        res.push_back(it.first);
                        k--;
                    }
                }
                j++;
            }
        return res;
    }
};