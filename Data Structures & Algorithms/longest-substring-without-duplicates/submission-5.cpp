class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.empty())
            return 0;
        std::unordered_set<char> charSet;
        int ans = 0;
        int i=0;
        int j=i+1;
        charSet.insert(s.at(i));
        while(j < s.size())
        {
            if(charSet.insert(s.at(j)).second ==false){
                ans = std::max(ans,int(charSet.size()));
                while(s.at(i) != s.at(j)){
                    charSet.erase(s.at(i));
                    i++;
                }
                charSet.erase(s.at(i));
                charSet.insert(s.at(j));
                i++;

            }
            j++;
        }
        return std::max(ans,int(charSet.size()));
    }
};
