class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    std::unordered_map<string, vector<string>> grp_map;

    for(auto i: strs)
    {
        auto s = i;
        std::sort(s.begin(),s.end());
        auto found = grp_map.find(s);
        if(found!=grp_map.end()){
            grp_map[s].push_back(i);
            continue;
        }
        grp_map[s]={i};

    }
    vector<vector<string>> answer;
    for(auto a: grp_map){
        answer.push_back(a.second);
    }
    return answer;
}
};
