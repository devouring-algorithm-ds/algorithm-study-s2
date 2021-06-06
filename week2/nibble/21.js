/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} l1
 * @param {ListNode} l2
 * @return {ListNode}
 */

//o(N)
var mergeTwoLists = function (l1, l2) {
    //l1, l2를 병합할 ListNode
    let dummyHead = { val: -1, next: null }
    let dummy = dummyHead;
    while (l1 && l2) {
        if (l1.val <= l2.val) {
            dummy.next = l1;
            l1 = l1.next;
        } else {
            dummy.next = l2;
            l2 = l2.next;
        }

        dummy = dummy.next;
    }

    dummy.next = l1 || l2;

    return dummyHead.next;
};