class Solution {
public:
    int maxDepth(string s) {
        vector<int> v;
        int max=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
               v.push_back(s[i]);
            else if(s[i]==')')
            {
                if(max<v.size())
                   max=v.size();
                v.pop_back();   
            }

        }
        return max;
    }
};