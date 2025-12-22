#include<vector>
#include<iostream>
#include <algorithm>

class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
        nums.erase(std::remove(nums.begin(), nums.end(), val), nums.end());
        return nums.size();
    }
};

int main(){
    Solution sol;
    std::vector<int> nums = {0,1,2,2,3,0,4,2};
    int size = sol.removeElement(nums , 2);
    std::cout << size << std::endl;
    return 0;
}