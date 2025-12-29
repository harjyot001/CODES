#include <iostream>  

using namespace std;
#define MAX_SIZE 100  

  
  
int stack[MAX_SIZE];  
int top = -1;  
  
void push(int item) {  
    if (top == MAX_SIZE - 1) {  
        cout<<"Stack Overflow"<<endl;  
        return;  
    }  
    stack[++top] = item;  
}  
  
int pop() {  
    if (top == -1) {  
        cout<<"Stack Underflow"<<endl;  
        return -1;  
    }  
    return stack[top--];  
}  
  
int peek() {  
    if (top == -1) {  
        printf("Stack is empty\n");  
        return -1;  
    }  
    return stack[top];  
}  
  
int isEmpty() {  
    return top == -1;  
}  
  
int isFull() {  
    return top == MAX_SIZE - 1;  
}  
  
int main() {  
    push(10);  
    push(20);  
    push(30);  
    cout<<"Top element:" << peek() << endl;  
    cout<<"Popped element:" << pop() << endl;  
    cout<<"Top element:" << peek() << endl;  
    push(25);  
    cout<<"Top element:" << peek() << endl;  

    return 0;  
}  