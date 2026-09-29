class Solution {
public:

    int digitsum(int num)
    {
        int sum=0;
        while(num>0)
        {
            sum=sum+num%10;
            num=num/10;
        }
        return sum;
    }
    int differenceOfSum(vector<int>& nums) {
        int ele_sum=0,digit_sum=0;
        for(int i=0;i<nums.size();i++)
        {
            ele_sum=ele_sum+nums[i];
            digit_sum = digit_sum+digitsum(nums[i]);
        }
        return abs(ele_sum-digit_sum);
    }
};