//
//  SLL.c
//  NsCodeSmart
//
//  Created by imbean on 10/12/2017.
//  Copyright © 2017 imbeanCTX. All rights reserved.
//

#include <stdio.h>

struct Node{
    int data;
    struct Node *next;
};

void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data=new_data;
    new_node->next=*head_ref;
    (*head_ref)=new_node;
}

void append(struct Node** head_ref, int new_data)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last =*head_ref;
    
    new_node->data=new_data;
    
    new_node->next=NULL;
    
    if(*head_ref==NULL)
    {
        *head_ref=new_node;
    }
    
    while(last->next!=NULL)
        last=last->next;
    
    last->next=new_node;
    
}

void deleteNode(struct Node** head_ref, int key)
{
    struct Node *temp=*head_ref,*prev;
    if(temp!=NULL && temp->data==key)
    {
        *head_ref=temp->next;
    }
    while(temp!=NULL && temp->data!=key)
    {
        prev = temp;
        temp=temp->next;
    }
    
    prev->next=temp->next;
    
}

void printList(struct Node *node)
{
    while(node!=NULL)
    {
        printf(" %d",node->data);
        node=node->next;
    }
}

int main() {
    int choice,data,deleteData;
    struct Node* head=NULL;
    while(1)
    {
        printf("Enter your choice:\n\
               1.Add Node.\n\
               2.Delete Node.\n\
               3.Print List.\n\
               4.Exit\n");
        scanf("%d",&choice);
        printf("Choice: %d\n",choice);
        
        switch (choice) {
            case 1:
                printf("Enter the node data:\n");
                scanf("%d",&data);
                push(&head,data);
                //append(&head,data);
                break;
            case 2:
                printf("Enter the node data to be deleted:\n");
                scanf("%d",&deleteData);
                printf("Before deletion:");
                printList(head);
                printf("\n");
                deleteNode(&head,deleteData);
                printf("After deletion:");
                printList(head);
                printf("\n");
                break;
            case 3:
                printList(head);
                printf("\n");
                break;
            case 4:
                exit(0);
            default:
                break;
        }
    }
    
    return 0;
}
