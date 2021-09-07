

class Solution
{
public:
    long binomialCoe(int n, int k)
    {
        long res = 1;
        if (k > n - k)
            k = n - k;
        for (int i = 0; i < k; i++)
        {
            res *= (n - i);
            res /= (i + 1);
        }
        return res;
    }
    int t[1001];
    int dp(int n)
    {
        t[0] = 1;
        t[1] = 1;
        for (int i = 2; i < n + 1; i++)
        {
            t[i] = 0;
            for (int j = 0; j < i; j++)
                t[i] += t[j] * t[i - j - 1];
        }
        return t[n];
    }
    int recursion(int n)
    {
        int result = 0;
        if (n == 1 || n == 0)
            return 1;
        for (int i = 0; i < n; i++)
            result += numTrees(i) * numTrees(n - i - 1);
        return result;
    }
    int numTrees(int n)
    {
        return binomialCoe(2 * n, n) / (n + 1);
    }
};
