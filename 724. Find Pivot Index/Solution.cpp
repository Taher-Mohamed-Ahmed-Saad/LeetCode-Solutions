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
    int pivotIndex(vector<int> &nums)
    {
        int sum = 0;
        int sz = nums.size();
        for (int i = 0; i < sz; i++)
        {
            sum += nums[i];
        }
        int sum2 = 0;
        for (int i = 0; i < sz; i++)
        {
            sum2 += nums[i];
            if (sum2 - nums[i] == sum - sum2)
                return i;
        }
        return -1;
    }
};