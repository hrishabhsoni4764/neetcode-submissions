class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        std::unordered_set<int> set;
        for(auto k: nums)
        {
          set.insert(k);
        }
        int longest_seq=0;
        
        for(auto k:nums){
          if(set.find(k-1)!=set.end())
            continue;
          int j=k;
          int count=1;
          while(set.find(j+1)!=set.end())
          {
            count++;
            j++;
          }
          longest_seq = std::max(longest_seq,count);
        }
        return longest_seq;
    }
};
