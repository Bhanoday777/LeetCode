class Solution {
public:

    int reverse_num(int num)
    {
        int r=0,rev=0;
        while(num>0)
        {
            r=num%10;
            rev= (rev*10)+r;
            num=num/10;
        }
        return rev;
    }
    int countDistinctIntegers(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            int reverse = reverse_num(nums[i]);
            if(!mp.contains(nums[i]))
               mp[nums[i]]++;
            if(!mp.contains(reverse))
                mp[reverse]++;
        }
        return mp.size();
    }
};