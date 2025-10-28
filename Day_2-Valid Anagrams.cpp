//Leetcode solution 
class Solution {
public:
    bool isAnagram(string s, string t) {

        vector<int>ans(26,0);
        if(s.length()!=t.length())
        {
            return false;
        }
        for(int i=0;i<s.length();i++)
        {
            ans[s[i]-'a']=ans[s[i]-'a']+1;
            ans[t[i]-'a']=ans[t[i]-'a']-1;
        }
        for(int i=0;i<26;i++)
        {
            if(ans[i]!=0)
            {
                return false;
            }
        }
        return true;
    }
};
