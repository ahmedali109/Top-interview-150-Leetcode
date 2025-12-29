#include<vector>
#include<algorithm>
#include<iostream>

class Solution {
public:
    void rotate(std::vector<int>& nums, int k) {
       int n = nums.size();
       k = k % n;
       std::vector<int> last(nums.end() - k , nums.end());
       nums.erase(nums.end() - k , nums.end());
       nums.insert(nums.begin() , last.begin() , last.end());
    }
};

int main() {
    Solution sol;
    std::vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    sol.rotate(nums, k);
    for (int num : nums) {
        std::cout << num << " ";
    }
    return 0;
}