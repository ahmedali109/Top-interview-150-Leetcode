#include<iostream>
#include<vector>
#include<algorithm>     

class Solution {
public:
    int hIndex(std::vector<int>& citations) {
        std::sort(citations.begin(),citations.end(),std::greater<int>());
        int h_index = 0;
        for(int i = 0; i < citations.size(); i++){
            if(citations[i] >= i+1) ++h_index;
        }
        return h_index;
    }
};

int main(){
    Solution sol;
    std::vector<int> citations = {3,0,6,1,5};
    int result = sol.hIndex(citations);
    std::cout << "H-Index: " << result << std::endl;
    return 0;
}