/*
Problem Description

Given a linked list where every node represents a linked list and contains two pointers of its type:

-Pointer to next node in the main list (right pointer)
-Pointer to a linked list where this node is head (down pointer). All linked lists are sorted.
You are asked to flatten the linked list into a single list. Use down pointer to link nodes of the flattened list. The flattened linked list should also be sorted.
*/

/* struct ListNode
{
  int val;
  ListNode *right,*down; ListNode(int x)
  { 
    val = x;
    right = down = NULL;
  } 
}; */

ListNode * merge(ListNode * a, ListNode * b) {
    if (a == NULL)
        return b;
    if (b == NULL)
        return a;
    ListNode * result;
    if (a -> val < b -> val) {
        result = a;
        result -> down = merge(a -> down, b);
    } else {
        result = b;
        result -> down = merge(a, b -> down);
    }
    return result;
}

ListNode * flatten(ListNode * root) {
    if (root == NULL || root -> right == NULL)
        return root;
    return merge(root, flatten(root -> right));
}
