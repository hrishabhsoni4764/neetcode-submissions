class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> set;
        for(auto i: nums){
            if((set.insert(i)).second == false)
                return true;
            
        }
        return false;
    }
};