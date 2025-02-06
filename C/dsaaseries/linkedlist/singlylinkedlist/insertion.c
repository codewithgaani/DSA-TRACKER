#include<stdio.h>
#include<stdlib.h>

// Define the structure of a linked list node
struct node {
    int data;
    struct node* next;
};

// Function to traverse and print the linked list
void display(struct node* ptr) {
    while(ptr != NULL) {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// Function to insert a node at the beginning
struct node* insertatbeg(struct node* head, int data) {
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr->next = head;
    ptr->data = data;
    head=ptr;
    return head;
}

// Function to insert a node at a specific position
struct node* insertatbetween(struct node* head, int data, int index) {
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    struct node* p = head;
    int i = 0;
    while(i != index - 1) {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

// Function to insert a node at the end of the linked list
struct node* insertatend(struct node* head, int data) {
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    struct node* p = head;
    ptr->data = data;
    while(p->next != NULL) {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

// Function to insert a node after a specific node
struct node* insertafternode(struct node* head, int data, struct node* prevnode) {
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = prevnode->next;
    prevnode->next = ptr;
    return head;
}

// Function to create and add a node at the end of the linked list
struct node* createNodeAtEnd(struct node* head, int data) {
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    struct node* p = head;

    // Initialize the new node
    ptr->data = data;
    ptr->next = NULL;

    // If the list is empty, the new node becomes the head
    if (head == NULL) {
        return ptr;
    }

    // Traverse to the last node
    while (p->next != NULL) {
        p = p->next;
    }

    // Attach the new node at the end
    p->next = ptr;
    return head;
}
struct node* reverse(struct node*head){
    struct node*current=head;
    struct node*prev=NULL;
    while (current!=NULL){
        struct node *temp=current->next;
        current->next=prev;
        prev=current;
        current=temp;
    }
    return prev;
}

int main() {
    struct node* head = NULL;  // Start with an empty linked list

    // Adding nodes using the createNodeAtEnd function
    head = createNodeAtEnd(head, 7);
    head = createNodeAtEnd(head, 11);
    head = createNodeAtEnd(head, 66);

    // Initial linked list traversal
    printf("Initial Linked List:\n");
    display(head);

    // Adding more nodes using other insertion functions
    head = insertatbeg(head, 5);
    printf("\nAfter inserting 5 at the beginning:\n");
    display(head);

    head = insertatbetween(head, 22, 2);
    printf("\nAfter inserting 22 at index 2:\n");
    display(head);

    head = insertatend(head, 99);
    printf("\nAfter inserting 99 at the end:\n");
    display(head);

    // Inserting a node after the second node (which has value 11)
    struct node* secondNode = head->next->next; // Node with value 11
    head = insertafternode(head, 55, secondNode);
    printf("\nAfter inserting 55 after the second node (value 11):\n");
    display(head);
    head=reverse(head);
    printf("reversed linked list is :\n");
    display (head);

    return 0;
}
