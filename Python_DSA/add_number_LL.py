"""
2. Add Two Numbers
Medium

You are given two non-empty linked lists 
representing two non-negative integers. 
The digits are stored in reverse order, 
and each of their nodes contains a single digit. 
Add the two numbers and return the sum 
as a linked list.

You may assume the two numbers do not 
contain any leading zero, except the 
number 0 itself.
"""

# Definition for singly-linked list.
class ListNode(object):
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution(object):

    def lliststr(self, head):
        st = ""
        curr = head
        while curr:
            st += str(curr.val)
            curr = curr.next
        return st

    def build_number_to_ll(self, num):
        header = ListNode(None)
        curr = header
        for i in str(num)[::-1]:
            temp = ListNode(int(i))
            curr.next = temp
            curr = temp
        return header.next

    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        result = ListNode(0)
        result_tail = result
        carry = 0
                
        while l1 or l2 or carry:            
            val1  = (l1.val if l1 else 0)
            val2  = (l2.val if l2 else 0)
            carry, out = divmod(val1+val2 + carry, 10)    
                      
            result_tail.next = ListNode(out)
            result_tail = result_tail.next                      
            
            l1 = (l1.next if l1 else None)
            l2 = (l2.next if l2 else None)
               
        return result.next




if __name__ == "__main__":
    n1 = 1299
    n2 = 1312
    sobj = Solution()
    head1 = sobj.build_number_to_ll(n1)
    head2 = sobj.build_number_to_ll(n2)
    ans = sobj.addTwoNumbers(head1, head2)
    print(n1, n2, sobj.lliststr(ans)[::-1])