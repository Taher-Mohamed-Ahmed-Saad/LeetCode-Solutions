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
    vector<string> summaryRanges(vector<int> &nums)
    {
        vector<string> s;
        int sz = nums.size();
        if (sz == 0)
            return s;
        int start = nums[0];
        string str;
        for (int i = 0; i < sz; i++)
        {
            if (i != sz - 1)
            {
                if (nums[i + 1] != nums[i] + 1)
                {
                    if (start == nums[i])
                        str = to_string(nums[i]);
                    else
                        str = to_string(start) + "->" + to_string(nums[i]);
                    s.push_back(str);
                    start = nums[i + 1];
                }
            }
            else
            {
                if (start == nums[i])
                    str = to_string(nums[i]);
                else
                    str = to_string(start) + "->" + to_string(nums[i]);
                s.push_back(str);
            }
        }
        return s;
    }
};