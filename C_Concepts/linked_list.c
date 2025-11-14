#include <stdio.h>
#include <stdlib.h>


// creation of linked list
struct Node {
    int data;
    struct Node *next;
};


int main() {

struct Node *head = NULL, *second = NULL, *third = NULL;

head = malloc(sizeof(struct Node));
second = malloc(sizeof(struct Node));
third = malloc(sizeof(struct Node));

head->data = 10; head->next = second;
second->data = 20; second->next = third;
third->data = 30; third->next = NULL;

 printList(head);
 free(head);
 free(second);
 free(third);
 return 0;
}

void printList(struct Node *head) {
 while (head != NULL) { // until the null node is reached
 printf("%d -> ", head->data);
 head = head->next;
 }
 printf("NULL\n");
}

void FreeList(struct Node *head) {
 struct Node *temp;
 while (head != NULL) {
 temp = head;
 head = head->next;
 free(temp);
 }
}


//function to create linked node/list
struct Node *createNode(int value){
    struct Node *newnode = malloc(sizeof(struct Node));
    newnode->data = value;
    newnode->next = NULL;
    return newnode;
}

int main(){
    struct Node *head = createNode(130);
    head->next = createNode(280);
    head->next->next = createNode(600);

    printList(head);
    FreeList(head);
    return 0;
}





struct Node *createNode(int value){
    struct Node *newnode = malloc(sizeof(struct Node));
    newnode->data = value;
    newnode->next = NULL;
    return newnode;
}

int main(){

    struct Node *head = createNode(567);
    head->next = createNode(904);
    head->next->next = createNode(503);                
    head->next->next->next = createNode(205);

     printList(head);
     FreeList(head);
    return 0;

}