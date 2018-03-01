
#include <stdio.h>
#include <stdlib.h>
#pragma pack(1)
struct Node{
    int data;
    struct Node *next;
};

int main(){
	printf("int=%lu\n",sizeof(int));
    printf("node=%ld\n",sizeof(struct Node));
    return 0;
}