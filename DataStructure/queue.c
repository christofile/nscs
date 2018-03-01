//
//  queue.c
//  NsCodeSmart
//
//  Created by imbean on 06/01/2018.
//  Copyright © 2018 imbeanCTX. All rights reserved.
//

#include <stdio.h>

void enqueue(int *queue,int data){
    int i;
    for(i=0;i<100;i++)
    {
        if(queue[0]=='\0')
        {
            queue[0]=data;
            break;
        }
        else if(queue[i]=='\0')
        {
            queue[i]=data;
            break;
        }
    }
}

void dequeue(int *queue)
{
    int i;
    for(i=0;i<100;i++)
    {
        if(queue[i]=='\0')
        {
            queue[--i]='\0';
            break;
        }
    }
}

void printArray(int *queue)
{
    int i;
    for(i=0;i<100;i++){
        if(queue[i]!='\0')
            printf("%d ",queue[i]);
    }
    printf("\n");
}

int main(){
    int queue[100]={'\0'},choice,data;
    while(1)
    {
        printf("Enter your choice:\n\
               1.Enqueue.\n\
               2.Dequeue.\n\
               3.Print Array.\n\
               4.Exit\n");
        scanf("%d",&choice);
        printf("Choice: %d\n",choice);
        
        switch (choice) {
            case 1:
                printf("Enter the queue data:\n");
                scanf("%d",&data);
                enqueue(queue,data);
                printf("Array after enqueue:\n");
                printArray(queue);
                break;
            case 2:
                dequeue(queue);
                printf("Array after dequeue:\n");
                printArray(queue);
                break;
            case 3:
                printArray(queue);
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
