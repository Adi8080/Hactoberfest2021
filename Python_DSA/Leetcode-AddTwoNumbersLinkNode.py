"""
You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [7,0,8]
Explanation: 342 + 465 = 807.
"""
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        i3=ListNode()
        ans=i3
        carry=0
        while (l1 is not None) or (l2 is not None) or carry:
            if l1:
                value1=l1.val
            else:
                value1=0
            if l2:
                value2=l2.val
            else:
                value2=0
            i3.val=value1+value2+carry
            carry=i3.val//10
            i3.val=i3.val%10
            if l1:
                l1=l1.next
            if l2:
                l2=l2.next
            if l1 or l2 or carry:
                i3.next=ListNode()
                i3=i3.next
        return ans