#include<iostream>
#include<vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        int l = 0, r = 1;
        if(nums.size() == 0) return 0;
        if(nums.size() == 1) return 1;
        for(int i = 2; i < nums.size(); i++){
            if(nums[r] != nums[i] || nums[r] != nums[l]){
                nums[++r]= nums[i];
                l++; 
            }          
        }
        return ++r;
    }
};

int main(){
    Solution sol;
    std::vector<int> nums = {0,0,1,1,1,1,2,3,3};
    int k = sol.removeDuplicates(nums);
    std::cout << "New length: " << k << std::endl;
    std::cout << "Modified array: ";
    for(int i = 0; i < k; i++){
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}