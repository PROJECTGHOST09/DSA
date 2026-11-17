#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

typedef struct Node n;
// Create a new node
n* createNode(int data) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertatbegining(struct Node **head,int data){
    n *ptr=createNode(data);
    ptr->next= *head;
    *head=ptr;
}

void insertatend(struct Node **head,int data){
    n *ptr=createNode(data);
    if(*head==NULL){
        *head=ptr;
        return;
    }
    struct Node *temp= *head;
    while(temp->next!=NULL){
       temp= temp->next;
    }
    temp->next=ptr;
}
void insertafter(struct Node *head,int target,int data){
    struct Node  *temp =head;
    while(temp!= NULL && temp->data!=target)
        temp=temp->next;
    if(temp==NULL){
        printf("%d not found \n",target);
        return;
    }
    n *ptr=createNode(data);
    ptr->next=temp->next;
    temp->next=ptr;
}
void display(struct Node *head){
    while(head!=NULL){
        printf("%d- ",head->data);
        head=head->next;
    }
    printf("NULL\n");
}
void deletefromhead(n **head){
    n *p=*head;
    *head = (*head)->next;
    free(p);
}
void deletefromend(n **head){
    if(*head == NULL){              // empty list
        return;
    }
    if((*head)->next == NULL){      // only one node
        free(*head);
        *head = NULL;               // list becomes empty
        return;
    }
    n *p = *head;
    n *q = (*head)->next;
    while(q->next != NULL){
        p = p->next;                // move both forward
        q = q->next;
    }
    p->next = NULL;                 // detach the last node
    free(q);
}
int main(){
    struct Node *head=NULL;
    insertatbegining(&head,5);
    insertatend(&head,20);
    insertatend(&head,30);
    insertatend(&head,40);
    display(head);
    insertafter(head,20,90);
    display(head);
    deletefromhead(&head);
    display(head);
    deletefromend(&head);
    display(head);
}