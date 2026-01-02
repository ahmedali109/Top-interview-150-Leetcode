#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    bool canJump(std::vector<int>& nums) {
        int maxReach = 0;
        for(int i = 0; i < nums.size(); i++){
          if(i > maxReach) return false;
          maxReach = std::max(maxReach, i + nums[i]);
          if (maxReach >= nums.size() - 1)
                return true;
        }
        return true;
    }
};

int main() {
    Solution solution;
    std::vector<int> nums = {2, 3, 1, 1, 4};
    if (solution.canJump(nums)) {
        std::cout << "Can jump to the last index." << std::endl;
    } else {
        std::cout << "Cannot jump to the last index." << std::endl;
    }
    return 0;
}