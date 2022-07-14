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

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
        // the easiest way to iterate first and count then go to the middle
        if (head->next == nullptr)
            return head;

        ListNode *fast, *rear;
        rear = head;
        fast = head->next;

        while (fast)
        {
            rear = rear->next;
            fast = fast->next;
            if (fast)
                fast = fast->next;
        }
        return rear;
    }
};