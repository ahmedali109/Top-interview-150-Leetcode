#include<vector>
#include<algorithm>
#include<iostream>

class Solution {
public:
    int jump(std::vector<int>& nums) {
       int min_r = 0 , cur_e = 0 , fur_e = 0;
       int num_s = nums.size();
       for(int i = 0; i < num_s - 1; i++){
            fur_e = std::max(fur_e , nums[i] + i);
            (i == cur_e) ? (++min_r, cur_e = fur_e) : 0;
       }
       return min_r;
    }
};

int main() {
    Solution solution;
    std::vector<int> nums = {2,3,1,1,4};
    int result = solution.jump(nums);
    std::cout << "Minimum Jumps: " << result << std::endl; 
    return 0;
}