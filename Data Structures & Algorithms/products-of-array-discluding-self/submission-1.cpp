class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len=nums.size();
        vector<int> left;
        vector<int> right;
        left.push_back(1);
        right.push_back(1);
        for(int i =1;i<len;i++)
        {
            left.push_back(left[i-1]*nums[i-1]);
            right.push_back(right[i-1]*nums[len-i]);
        }
        vector<int> ans={};
        // ans.push_back(right[len-2]);
        for(int i=0;i<len;i++)
        {
            ans.push_back(left[i]*right[len-i-1]);
        }
        // ans.push_back(left[len-2]);
        return ans;
    }
};
// [1,2,8,48]
// [6,24,48,48]

// [ans2[1],ans1[i-1]*ans2[size-i-1]]