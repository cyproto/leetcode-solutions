class Solution
{
public:
    string decodeString(string s)
    {
        int pos = 0;
        return helper(pos, s);
    }

    string helper(int &pos, string s)
    {
        int num = 0;
        string word = "";
        for (; pos < s.size(); pos++)
        {
            if (s[pos] == '[')
            {
                string currentWord = helper(++pos, s);
                for (; num > 0; num--)
                    word += currentWord;
            }
            else if (s[pos] >= '0' && s[pos] <= '9')
            {
                num = num * 10 + s[pos] - '0';
            }
            else if (s[pos] == ']')
            {
                return word;
            }
            else
            {
                word += s[pos];
            }
        }
        return word;
    }
};