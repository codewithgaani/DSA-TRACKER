#include<stdio.h>
#include<stdlib.h>

// Define the structure of a linked list node
struct node {
    int data;
    struct node* next;
};

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
void display(struct node* ptr) {
    while(ptr != NULL) {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
int getlength(struct node*head){
    int len=0;
    while(head!=NULL){
        len++;
        head=head->next;
    }
    return len;
}
struct node*middle(struct node *head){
    int len =getlength(head);                            
    int ans=(len/2);
    struct node*temp=head;
    int cnt=0;
    while(cnt<ans){
        temp=temp->next;
        cnt++;
    }
    return temp;

}
int main() {
    struct node* head = NULL;  // Start with an empty linked list

    // Adding nodes using the createNodeAtEnd function
    head = createNodeAtEnd(head, 7);
    head = createNodeAtEnd(head, 11);
    head = createNodeAtEnd(head, 66);
    head=createNodeAtEnd(head,34);
    head=createNodeAtEnd(head,69);
    head=middle(head);
    display(head);
    }