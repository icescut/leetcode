/***********************************************************************************
 * 21 Merge Two Sorted Lists
 * Merge two sorted linked lists and return it as a new list. The new list should be
 * made by splicing together the nodes of the first two lists.
 * Alan Liang, icescut1986@hotmail.com
 * 如果l1当前节点的值小于l2当前节点的值，则l1的next为l1当前的next与l2的比较小的那个，返回l1
 * 否则，则l2的next为l2当前的next与l1的比较小的那个，返回l2
 * 复杂度O(n)
***********************************************************************************/
/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */
/**
 * @param {ListNode} l1
 * @param {ListNode} l2
 * @return {ListNode}
 */
var mergeTwoLists = function(l1, l2) {
    if(l1 == null) return l2;
    if(l2 == null) return l1;
    if(l1.val < l2.val) {
        l1.next = mergeTwoLists(l1.next, l2);
        return l1;
    } else {
        l2.next = mergeTwoLists(l2.next, l1);
        return l2;
    }
};