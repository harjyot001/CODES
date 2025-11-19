#include<iostream>
using namespace std;
#define maxsize 5

int queue[maxsize];
int *front;
int *rear;

void insert(){
    int val;
    cout<<"Enter value";
    cin>>val;

    if(rear== maxsize-1 && rear>front) {
        cout<<"Full\n";
        return;
    }else if(rear ==-1 && front == -1){
        rear = 0;
        front = 0;
        queue[front] = val;
        cout<<"inserted";
    }else{
        rear +=1;
        queue[rear] = val;
        cout<<"inserted";
    } 

}



void delete(){
    if(front>rear && front ==-1){
        cout<<"empty";
        return;
    }else if (rear==0 && front ==0){
        rear = -1;
        front = -1;
        cout<<"deleted";

    }else{
        front = front+1;
        cout<<"deleted";
    }
}


void display(){
    int i;
    for(i=front;i<=rear;i++){
        cout<<queue[i]<<" ";
    }
}

int main(){


    insert(10);
    insert(20);
    insert(30);
    display();

}


