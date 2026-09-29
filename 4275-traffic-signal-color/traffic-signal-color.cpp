class Solution {
public:
    string trafficSignal(int timer) {
        string s="Invalid";
        if(timer==0)
           s = "Green";
        if(timer==30)
           s="Orange";
        if(timer>30 && timer<=90)
          s="Red";

        return s;
    }
};