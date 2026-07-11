class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left=0,right=heights.size()-1;
        int maxA=0;
        //cost function should be maximise (diff * min(h1,h2))
        while(left<right)
        {
            maxA = std::max(maxA, ((right-left)*std::min(heights[left],heights[right])));
            if(heights[left]<heights[right])
                left++;
            else right--;
        }
        return maxA;
    }
};
