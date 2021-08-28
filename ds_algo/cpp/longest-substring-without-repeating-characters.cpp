class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        map<char, int> strmap;

        int start = -1, maxLength = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (strmap.count(s[i]) != 0)
            {
                start = max(strmap[s[i]], start);
            }
            strmap[s[i]] = i;
            maxLength = max(maxLength, i - start);
        }
        return maxLength;
    }
};