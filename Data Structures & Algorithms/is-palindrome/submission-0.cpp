class Solution {
public:
    bool isPalindrome(string s) {
        int left=0;
        int right=s.size()-1;
        while(left<=right)
        {
          if(!isAlphaNumeric(s.at(left)))
          {
            left++;
            continue;
          }
          if(!isAlphaNumeric(s.at(right)))
          {
            right--;
            continue;
          }
          if( std::tolower(s.at(left)) == std::tolower(s.at(right)))
          {
            left++;
            right--;
            continue;
          }
          return false;

        }
        return true;
    }
    bool isAlphaNumeric(char c)
    {
      if((c>='a' && c<='z') || (c>='A' && c<='Z') || (c>='0' && c<='9'))
        return true;

      return false;
    }
};
