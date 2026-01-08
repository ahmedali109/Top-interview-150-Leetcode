#include<iostream>
#include<vector>

class Solution {
public:
    std::vector<int> productExceptSelf(std::vector<int>& nums) {
        int n = nums.size();
        std::vector<int> result(n, 1);
        int prefix = 1;
        for (int i = 0; i < n; i++) {
            result[i] = prefix;
            prefix *= nums[i];
        }
        int suffix = 1;
        for (int i = n - 1; i >= 0; i--) {
            result[i] *= suffix;
            suffix *= nums[i];
        }
        return result;
    }
};

int main() {
    Solution solution;
    std::vector<int> nums = {1, 2, 3, 4};
    std::vector<int> result = solution.productExceptSelf(nums);
    
    std::cout << "Product of array except self: ";
    for (int val : result) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
    
    return 0;
}