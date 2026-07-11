class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded="";
        for(auto &str:strs){
            encoded = encoded + std::to_string(str.size()) +"#"+str;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> strs;
        int length;
        string temp="";
        for(int i=0;i<s.size();i++)
        {
            if(s.at(i)=='#')
            {
                length=std::stoi(temp);
                strs.push_back(s.substr(i+1, length));
                i=i+length;
                temp="";
                continue;
            }
            temp=temp+s.at(i);
        }

        return strs;
    }
};
