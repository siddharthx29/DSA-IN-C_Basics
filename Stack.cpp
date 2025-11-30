
#include <stdio.h>
#define max 5
int stack [max];

int top = -1;
void push(int value){
	if (top==max-1){
		printf("stack overflow %d cannot push",value);
	}
	else{
		stack[++top]=value;
		printf("%dpushed into the stack",value);
	}
	}
	void pop() {
    if (top == -1) {
        printf("Stack Underflow! Nothing to pop\n");
    } else {
        printf("%d popped from stack\n", stack[top--]);
    }
    void display() {
    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }
    
    printf("Stack elements: ");
    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    } 
    printf("\n");
    
    int main() {
    push(10);
    push(20);
    push(30);
    display();

    pop();
    display();

    return 0;
}
}





