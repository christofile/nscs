//
//  stack.c
//  NsCodeSmart
//
//  Created by imbean on 06/01/2018.
//  Copyright © 2018 imbeanCTX. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *next;
};

void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    printf("int=%lu\n",sizeof(int));
    printf("node=%ld\n",sizeof(struct Node));
    new_node->data=new_data;
    new_node->next=*head_ref;
    (*head_ref)=new_node;
}

void pop(struct Node** head_ref)
{
    struct Node* temp = *head_ref;
    
    *head_ref=temp->next;
    
}

void printList(struct Node *node)
{
    while(node!=NULL)
    {
        printf(" %d",node->data);
        node=node->next;
    }
    printf("\n");
}

int main()
{
    int choice,data;
    struct Node* head=NULL;
    while(1)
    {
        printf("Enter your choice:\n\
               1.Push.\n\
               2.Pop.\n\
               3.Print List.\n\
               4.Exit.\n");
        scanf("%d",&choice);
        printf("Choice: %d\n",choice);
        switch (choice) {
            case 1:
                printf("Enter the node data:\n");
                scanf("%d",&data);
                push(&head,data);
                printf("Link list after pushing:\n");
                printList(head);
                break;
            case 2:
                pop(&head);
                printf("Link list after poping:\n");
                printList(head);
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
