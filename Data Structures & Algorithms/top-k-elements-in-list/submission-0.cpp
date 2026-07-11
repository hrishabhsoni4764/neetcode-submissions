class Solution {
public:
    struct trueIfGreater
    {
        bool operator()(std::pair<int,int> &p1, std::pair<int,int> &p2){
            return p1.second<p2.second;
        }
    };
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        // std::map<int,int> count; //nlog(n) with loop over nums
        std::unordered_map<int, int> unmap;
        for(const auto i : nums)
        {
            unmap[i]++;
        }
        
        std::priority_queue<std::pair<int,int>,std::vector<std::pair<int,int>>,trueIfGreater> pq;
        
        // std::priority_queue<int> pq;
        for(const std::pair<int,int> &i : unmap)
        {
            pq.push(i);
        }
        vector<int> answer;
        for(int i =0;i<k;i++){
            answer.push_back(pq.top().first);
            pq.pop();    
        }
        return answer;
    }
};
