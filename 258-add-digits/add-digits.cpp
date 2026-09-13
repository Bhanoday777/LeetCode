class Solution {
public:
    int addDigits(int num) {
        if(num<=9)
            return num;
        long int r=0,sum=0;
        while(num>9){
        while(num>0){
            r=num%10;
            sum = sum+r;
            num=num/10;
        }
        num=sum;
        sum=0;
     }
        return num;
    }
};