#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Node{
    char firstName[31];
    char lastName[31];
    int age;
    char sex;
    int priority;
    struct Node* next;
}Node;

Node* createNode(){
    Node* newNode = malloc(sizeof(Node));
    if(newNode == NULL){
        printf("Memory Allocation Error\n");
        return NULL;
    }
    printf("Enter first name, last name, age, sex (M/F), and priority: ");
    scanf("%s %s %d %c %d", newNode->firstName, newNode->lastName, &newNode->age, &newNode->sex, &newNode->priority);
    newNode->next = NULL;
    printf("Created node: %s %s, Age: %d, Sex: %c, Priority: %d\n", newNode->firstName, newNode->lastName, newNode->age, newNode->sex, newNode->priority);
    return newNode;
}

Node* addPriorityQueue(Node* head){
    printf("Adding new node to the priority queue...\n");
    Node* newNode = createNode();
    if(head == NULL){
        printf("Queue is empty. Adding new node as the first element.\n");
        return newNode;
    }
    if(head->priority > newNode->priority){
        newNode->next = head;
        printf("New node added at the beginning of the queue.\n");
        return newNode;
    }
    Node* ptr = head;
    while(ptr->next != NULL && ptr->next->priority <= newNode->priority){
        ptr = ptr->next;
    }
    newNode->next = ptr->next;
    ptr->next = newNode;
    printf("New node added after node with priority: %d\n", ptr->priority);

    return head;
}

Node* dequeue(Node* head){
    if(head == NULL){
        printf("Queue is empty, nothing to dequeue.\n");
        return NULL;
    }
    printf("Dequeuing the first node in the queue: %s %s\n", head->firstName, head->lastName);
    Node* ptr = head;
    Node* newHead = ptr->next;
    free(ptr);
    return newHead;
}

void display(Node* head){
    if(head == NULL){
        printf("Queue is empty, nothing to display.\n");
        return;
    }
    printf("Displaying the first node in the queue: %s %s, Age: %d, Sex: %c, Priority: %d\n",
           head->firstName, head->lastName, head->age, head->sex, head->priority);
}

int main(){
    char sign;
    Node* priorityQueue = NULL;

    printf("Enter commands (+ to add, - to dequeue, * to exit):\n");

    while(1){
        scanf(" %c", &sign);  // Add a space before %c to skip any whitespace characters
        if(sign == '+'){
            priorityQueue = addPriorityQueue(priorityQueue);
        }else if(sign == '-'){
            display(priorityQueue);
            priorityQueue = dequeue(priorityQueue);
        }else if(sign == '*'){
            printf("Exiting program...\n");
            exit(0);
        }else{
            printf("Invalid command. Please enter '+', '-', or '*'.\n");
        }
    }

    return 0;
}

