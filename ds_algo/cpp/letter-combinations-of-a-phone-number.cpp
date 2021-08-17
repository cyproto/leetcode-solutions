string keypad[10] = {
    "", "",
    "abc",
    "def",
    "ghi",
    "jkl",
    "mno",
    "pqrs",
    "tuv",
    "wxyz"};
class Solution
{
    vector<string> finaloutput;

public:
    vector<string> letterCombinations(string digits)
    {
        if (digits == "")
        {
            return {};
        }
        combo(digits, "", digits.length() - 1);
        return finaloutput;
    }

    void combo(string digits, string output, int len)
    {
        if (len == -1)
        {
            finaloutput.push_back(output);
            return;
        }
        int val = (int)digits[len] - 48;
        int rowlen = keypad[val].length();
        for (int i = 0; i < rowlen; i++)
        {
            combo(digits, keypad[val][i] + output, len - 1);
        }
    }
};