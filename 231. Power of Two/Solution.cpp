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

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n<= 0)
            return false;
        while(n%2 == 0)
        {
            n = n/2;
        }
        return n == 1 ;
    }
};

// O(1) solution
// class Solution {
// public:
//     bool isPowerOfTwo(int n) {
//         if(n<=0) return false;
//         return ((n&(n-1))==0);
//     }
// };