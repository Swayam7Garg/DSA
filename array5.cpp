//program for Rearrange Array Elements by Sign
#include <bits/stdc++.h>
using namespace std;
vector<int> rearrangeArray(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans(n, 0);

    int pos = 0, neg = 1;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] >= 0)
        {
            ans[pos] = nums[i];
            pos += 2;
        }
        else
        {
            ans[neg] = nums[i];
            neg += 2;
        }
    }

    return ans;
}

int main()
{
    vector<int> arr = {1, 2, -4, -3, 2, -5};
    vector<int> ans = rearrangeArray(arr);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}