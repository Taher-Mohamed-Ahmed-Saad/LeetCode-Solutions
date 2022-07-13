#include <iostream>
#include <string.h>
#include <cstring>
#include <vector>
#include <string>
#include <cmath>
#include <stack>
#include <map>
#include <algorithm>
#include <set>
#include <queue>
#include <sstream>
#include <iomanip>
#include <unordered_map>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    double findMaxAverage(vector<int> &nums, int k)
    {
        int max_sum = 0;
        int sz = nums.size();
        for (int i = 0; i < k; i++)
        {
            max_sum += nums[i];
        }
        int curr_sum = max_sum;
        for (int i = 1; i < sz - (k - 1); i++)
        {
            curr_sum = curr_sum - nums[i - 1] + nums[i + k - 1];
            if (curr_sum > max_sum)
                max_sum = curr_sum;
        }
        return max_sum * 1.0 / k;
    }
};
