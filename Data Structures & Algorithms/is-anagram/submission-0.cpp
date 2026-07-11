class Solution {
public:
    bool isAnagram(string s, string t) {
        int total_cnt;
        int char_arr[26];
        for(auto ch: s){
            char_arr[ch-97]++;
            total_cnt++;
        }
        for(auto ch: t){
            char_arr[ch-97]--;
            total_cnt--;
        }
        for(auto a: char_arr){
            if(a!=0)
                return false;
        }
        return true;
    }
};
