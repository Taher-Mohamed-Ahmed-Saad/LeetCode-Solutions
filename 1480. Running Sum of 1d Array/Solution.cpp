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
    vector<int> runningSum(vector<int> &nums)
    {
        int sz = nums.size();
        for (int i = 1; i < sz; i++)
        {
            nums[i] += nums[i - 1];
        }
        return nums;
    }
};