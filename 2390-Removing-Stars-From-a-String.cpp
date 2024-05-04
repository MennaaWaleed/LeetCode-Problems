class Solution {
public:
    string removeStars(string s) {
        string ans;
        for(int i=0;i<s.size();++i)
        {
            if(ans.size()==0)
            {
                ans.push_back(s[i]);
            }
            else
            {
                if(s[i]=='*')
                {
                    ans.pop_back();
                }
                else
                {
                    ans.push_back(s[i]);
                }
            }
        }
        return ans;
    }
};