#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct ListNode
{
    struct ListNode*next;
    int val;
};
struct ListNode* getmid(struct ListNode* head) {
    struct ListNode* fast = head;
    struct ListNode* slow = head;
    
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    
    return slow;  // Return the middle node
}

struct ListNode* reverse(struct ListNode* head) {
    struct ListNode* current = head;
    struct ListNode* prev = NULL;
    
    while (current != NULL) {
        struct ListNode* temp = current->next;  // Store the next node
        current->next = prev;  // Reverse the link
        prev = current;  // Move prev forward
        current = temp;  // Move to the next node
    }
    
    return prev;  // Return the new head of the reversed list
}

bool isPalindrome(struct ListNode* head) {
    // Handle edge case: empty list or single-node list
    if (head == NULL || head->next == NULL) {
        return true;
    }

    // Find the middle node
    struct ListNode* middle = getmid(head);
    
    // Reverse the second half of the list
    struct ListNode* secondHalf = reverse(middle->next);

    // Compare the first half and the reversed second half
    struct ListNode* head1 = head;
    struct ListNode* head2 = secondHalf;

    bool result = true;
    while (head2 != NULL) {
        if (head1->val != head2->val) {
            result = false;
            break;
        }
        head1 = head1->next;
        head2 = head2->next;
    }

    // Restore the second half to its original order
    middle->next = reverse(secondHalf);

    return result;  // Return whether the list is a palindrome
}
struct ListNode  *create(struct ListNode *head)
{
    struct ListNode *temp, *p1=head;
    temp=(struct ListNode *)malloc(sizeof(struct ListNode));
    if(temp==NULL)
    {
        printf("Space is not available\n");
    }
    else if(head==NULL)
    {
        printf("Enter your data = ");
        scanf("%d", &temp->val);
        temp->next=NULL;
        head=temp;
    }
    else
    {
        printf("Enter your data = ");
        scanf("%d", &temp->val);
        while(p1->next!=NULL)
        {
            p1=p1->next;
        }
        p1->next=temp;
        temp->next=NULL;
    }
    return head;
}
int main()
{
    struct ListNode* head = NULL;
    head=create(head);
    head=create(head);
    head=create(head);
    head=create(head);
    head=create(head);
    if(isPalindrome(head))
    {
        printf("Pallindrome");
    }
    else{
        printf("Not Pallindrome");
    }
}
