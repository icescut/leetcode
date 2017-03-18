/***********************************************************************************
 * 21 Merge Two Sorted Lists
 * Merge two sorted linked lists and return it as a new list. The new list should be
 * made by splicing together the nodes of the first two lists.
 * Alan Liang, icescut1986@hotmail.com
***********************************************************************************/
#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        if (l1 == nullptr) return l2;
        if (l2 == nullptr) return l1;
        if(l1->val < l2->val)
        {
            l1->next = mergeTwoLists(l1->next, l2);
            return l1;
        } else
       {
            l2->next = mergeTwoLists(l2->next, l1);
            return l2;
        }
    }
};

int main()
{
    ListNode *l1, *l2;
    ListNode *t1 = new ListNode(1);
    l1 = t1;
    ListNode *t2 = new ListNode(3);
    t1->next = t2;
    t1 = new ListNode(5);
    t2->next = t1;

    t1 = new ListNode(2);
    l2 = t1;
    t2 = new ListNode(4);
    t1->next = t2;
    t1 = new ListNode(6);
    t2->next = t1;

    Solution s;
    ListNode *r = s.mergeTwoLists(l1, l2);

    while(r)
    {
        cout << r->val << "\t";
        r = r->next;
    }
}
