#include<vector>
#include<algorithm>
#include<iostream>

class Solution {
public:
    int majorityElement(std::vector<int>& nums) {
       sort(nums.begin(),nums.end());
       return nums[nums.size()/2];
    }
};

int main(){
    Solution sol;
    std::vector<int> nums = {3,2,3};
    std::cout << sol.majorityElement(nums) << std::endl;
    return 0;
}