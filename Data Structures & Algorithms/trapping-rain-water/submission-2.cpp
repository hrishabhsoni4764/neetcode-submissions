class Solution {
public:
    int trap(vector<int>& height) {
        int len = height.size();
        vector<int> leftMax(len,0);
        vector<int> rightMax(len,0);
        leftMax[0] = 0;
        rightMax[len-1]=0;
        for(int i=1;i<len;i++){
           leftMax[i] = std::max(leftMax[i-1],height[i-1]);
           rightMax[len-1-i] = std::max(rightMax[len-i],height[len-i]);
        }
        int water=0;
        for(int i=1;i<len-1;i++)
        {
            if(height[i] > leftMax[i] || height[i] > rightMax[i])
                continue;
            water = water + std::min(leftMax[i],rightMax[i]) - height[i];
            
        }
        return water;
    }
};
