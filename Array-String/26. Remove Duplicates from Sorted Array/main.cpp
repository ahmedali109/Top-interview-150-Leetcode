#include <vector>
#include <algorithm>
#include <iostream>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
       std::sort(nums.begin(), nums.end());
       nums.erase(std::unique(nums.begin(), nums.end()), nums.end());
       return nums.size();
    }
};

int main() {
    Solution solution;
    std::vector<int> nums = {1, 1, 2, 2, 3, 4, 4, 5};
    int newLength = solution.removeDuplicates(nums);
    
    std::cout << "New length: " << newLength << std::endl;
    std::cout << "Array after removing duplicates: ";
    for (int i = 0; i < newLength; ++i) {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}