class Solution {
public:
    int reverse_num(int num)
    {
        if(num==0)
           return true;
        int r=0,reverse=0;
        while(num>0)
        {
            r=num%10;
            reverse=(reverse*10)+r;
            num=num/10;
        }
        return reverse;
    }
    
    bool isSameAfterReversals(int num) {
        
        if(num==0)
            return true;
        bool check;
        int reversed1,reversed2=0;
        reversed1=reverse_num(num);
        reversed2=reverse_num(reversed1);
        
        if(reversed2==num)
            check=true;
        else
           check=false;
    return check;
    }
};