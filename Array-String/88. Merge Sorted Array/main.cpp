#include <algorithm>
#include <iostream>
#include<vector>

class Solution {
public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
        for(int i = m; i < nums1.size(); i++){
            nums1[i] = nums2[i-m];
        }
        sort(nums1.begin(), nums1.end());
    }
};

int main() {
    Solution sol;
    std::vector<int> nums1 = {1,2,3,0,0,0};
    std::vector<int> nums2 = {2,5,6};
    int m = 3 , n = 3;
    sol.merge(nums1 , m , nums2 , n);
    for (int num : nums1) {
        std::cout << num << " ";
    }
    return 0;
}