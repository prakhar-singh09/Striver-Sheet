// // Given the heads of two singly linked-lists headA and headB, return the node at which the two lists intersect. If the two linked lists have no intersection at all, return null.

// // Examples:

// // Example 1:
// // Input:
// // List 1 = [1,3,1,2,4], List 2 = [3,2,4]
// // Output:
// // 2
// // Explanation: Here, both lists intersecting nodes start from node 2.

// // Example 2:
// // Input:
// //  List1 = [1,2,7], List 2 = [2,8,1]
// // Output:
// //  Null
// // Explanation: Here, both lists do not intersect and thus no intersection node is present.

// Solution
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    //getting the tail
    ListNode* tail = headA;
    while(tail->next){
        tail = tail->next;
    }

    //creating a loop
    tail->next = headA;

    //detecting and finding the intersection
    ListNode *fast = headB, *slow = headB;

    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;

        if(slow==fast) {
            slow = headB;
            while(slow!=fast){
                slow = slow->next;
                fast = fast->next;
            }
            //undoing the loop
            tail->next = NULL;
            return slow;
        };
    }
    tail->next = NULL;
    return NULL;
}


// Time complexity: O(n+m)
// Space complexity: O(1)
  
