#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node* next;
};
struct node*head;

void beginsert();
// void lastinsert();
// void randominsert();
void display();

int main(){
    beginsert();
    // lastinsert();
    display();


}


void beginsert(){
    struct node*ptr;
    int item;
    ptr=(struct node*) malloc(sizeof(struct node*));
    cout<<"enter the value"<<endl;
    cin>>item;
    ptr->data=item;
    ptr->next=head;
    head=ptr;
}

 void display(){
     struct node*ptr;
        ptr=head;
        while(ptr!=NULL){
            cout<<ptr->data<<endl;
            ptr=ptr->next;

        }
}