#include<iostream>
#include<vector>
#include<unordered_map>
#include<random>
#include<algorithm>

class RandomizedSet {
private:
    std::vector<int> v;
public:
    RandomizedSet() {}
    
    bool insert(int val) {
        for(auto values : v){
            if(values == val) return false;
        }
        v.push_back(val);
        return true;
    }
    
    bool remove(int val) {
        auto it = std::find(v.begin(), v.end(), val);
        if (it != v.end()) {
            v.erase(it);
            return true;
        }
        return false;
    }
    
    int getRandom() {
        return v[rand() % v.size()];
    }
};

int main() {
    RandomizedSet* obj = new RandomizedSet();
    bool param_1 = obj->insert(1);
    bool param_2 = obj->remove(2);
    int param_3 = obj->getRandom();
    for(bool b : {param_1, param_2}) {
        std::cout << (b ? "true" : "false") << std::endl;
    }
    std::cout << param_3 << std::endl;
    return 0;
}