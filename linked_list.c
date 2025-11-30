#include <stdio.h>
#include<stdlib.h>

struct Node {
	int data;
	struct node *next;
};

struct Node* head = NULL;

void insert (int value) {
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode -> data = value;
	newNode -> next = NULL;
	


if (head == NULL) {
	head = newNode;
	return;
} 

struct Node* temp = head; 
while(temp->next != NULL) {
	temp = temp->next;
	
   }
temp->next = newNode;
}




void display(){
	struct Node* temp=head;
	if(temp == NULL){
		printf("List is Empty\n");
		return;
	}
	printf("Linked List: ");
	while(temp != NULL){
		printf("%d -> ", temp -> data);
		temp = temp -> next;
		printf("NULL\n");
	}
}

void delete(int value){
    struct Node *temp = head, *prev = NULL;
    
    // If head node itself holds the value
    if (temp != NULL && temp->data == value) {
        head = temp->next;
        free(temp);
        return;
    }
    

    // Search for the value to be deleted
    while (temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }
    
    while(temp != NULL && temp-> data != value) {
    	prev = temp;
    	temp = temp->next;
	}

    // If value not found
    if (temp == NULL) {
        printf("Value %d not found in list.\n", value);
        return;
    }
    
    if (temp==NULL){
    	printf("value %d not found in List.\n", value);
    	return;
	}

    prev->next = temp->next;
    free(temp);
    prev->next = temp -> next;
    free(temp);
}



int main(){
	
	insert(10);
	insert(20);
	insert(30);
	display();
	return 0;
	
}






