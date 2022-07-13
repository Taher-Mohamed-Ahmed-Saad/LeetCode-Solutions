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
    bool judgeCircle(string moves)
    {
        int count[4] = {0, 0, 0, 0};
        int sz = moves.size();
        for (int i = 0; i < sz; i++)
        {
            if (moves[i] == 'U')
                count[0]++;
            else if (moves[i] == 'D')
                count[1]++;
            else if (moves[i] == 'L')
                count[2]++;
            else if (moves[i] == 'R')
                count[3]++;
        }
        return (count[0] == count[1] && count[2] == count[3]);
    }
};