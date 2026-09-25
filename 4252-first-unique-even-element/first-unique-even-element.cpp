class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        
        int res=-1,count=0;
        for(int i=0;i<nums.size();i++)
        {
            count=0;
            for(int j=0;j<nums.size();j++)
            {
                if(nums[i]%2==0 && nums[i]==nums[j])
                    count++;
            }
            if(count==1)
            {
                res=nums[i];
                break;
            }
        }
        
        return res;

    }
};