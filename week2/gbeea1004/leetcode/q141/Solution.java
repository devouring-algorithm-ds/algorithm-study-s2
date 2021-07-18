public class Solution {
    public boolean hasCycle(ListNode head) {
        ListNode fast = head; // 2칸씩 움직임
        ListNode slow = head; // 1칸씩 움직임

        while (fast != null && fast.next != null) {
            fast = fast.next.next;
            slow = slow.next;

            if (slow == fast) {
                return true;
            }
        }
        return false;
    }
}