class Solution
{
public:
    int kthGrammar(int n, int k)
    {
        if (k == 1 && n == 0)
        {
            return 0;
        }

        int mid = pow(2, n - 1);
        cout << mid << "mid" << endl;
        cout << n << "n" << endl;
        cout << k << "k" << endl;
        if (k <= mid)
        {
            return kthGrammar(n - 1, k);
        }
        else
        {
            return !kthGrammar(n - 1, k - mid);
        }
    }
};