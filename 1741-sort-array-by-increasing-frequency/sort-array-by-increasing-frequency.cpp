#include <vector>
#include <unordered_map>
#include <algorithm>

class Solution {
public:
    std::vector<int> frequencySort(std::vector<int>& nums) {
        // Step 1: Count the frequency of each number
        std::unordered_map<int, int> mp;
        for (int num : nums) {
            mp[num]++;
        }
        std::sort(nums.begin(), nums.end(), [&mp](int a, int b) {
            if (mp[a] != mp[b]) {
                return mp[a] < mp[b];
            }
            return a > b;
        });
        
        return nums;
    }
};
