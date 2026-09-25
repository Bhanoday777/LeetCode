class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum1=0,sum2=0,res=-1;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                sum1=sum1+nums[j];
            }
            for(int k=i+1;k<nums.size();k++)
            {
                sum2=sum2+nums[k];
            }
            if(sum1==sum2)
            {
                res=i;
                break;
            }
            sum1=0;
            sum2=0;
        }
        return res;
    }
};