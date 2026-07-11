class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans={};
        std::sort(nums.begin(),nums.end());  //nlogn

        // int i,j,k;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0) break;
            if( i>0 && nums[i]==nums[i-1])
                continue;
            int left=i+1,right=nums.size()-1;
            // vector<int> temp = twoSum(nums,i,(0-nums[i])) ; // space O(1) as only two index;
            while(left<right)
            {
                int sum = nums[i] + nums[left] + nums[right];
                if(sum>0) right--;
                else if(sum<0) left++;
                else {
                    ans.push_back({nums[i],nums[left],nums[right]});
                    left++;
                    right--;
                    while(left<right && nums[left] == nums[left-1]) left++;
                }
            }
        }
        return ans;
        
    }

    std::vector<int> twoSum(vector<int> nums,int index, int target)
    {
        int i =0,j=nums.size()-1;
        while( i<j )
        {
            if(i==index || j==index)
                continue;
            int sum = nums[i]+nums[j];
            if(sum == target)
                return {nums[i],nums[j]}; 
            
            if(sum < target)
            {
                i++;
                continue;
            }
            if(sum > target)
            {
                j--;
                continue;
            }
        }
        return {};
    }
};
