#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node *next;
	
};

struct newNode* head = NULL;

void insert(int value){
	struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
	newNode -> data = value;
	newNode -> next = NULL;

	
	if (head == NULL){
	   head = newNode;
	   return;
	}
	
	struct Node* temp = head;
	while(temp->next !=NULL){
		temp=temp->next;
	}
	temp->next=newNode; 
}


void display() {
	struct Node* temp=head;
	if (temp==NULL){
		printf("List is empty:\n");
		return;
	}
	printf("lINKED lIST");
	while(temp != NULL ){
		printf("%d -> ", temp->data);
		temp= temp -> next;
		printf("NULL\n");
		
	}
}
	
	int main(){
		insert(10);
		insert(20);
		display();
		return 0;
	}


