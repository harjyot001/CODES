 #include <iostream>
#include <cstdlib>
using namespace std;

struct node {
    int data;
    node* next;
};

node* head = nullptr;

void beginsert();
void lastinsert();
void randominsert();
void begin_delete();
void last_delete();
void random_delete();
void searchNode();
void display();

int main() {
    int choice = 0;

    while (choice != 9) {
        cout << "\n\n********* Main Menu *********\n";
        cout << "1. Insert at beginning\n"
             << "2. Insert at last\n"
             << "3. Insert at specific location\n"
             << "4. Delete from beginning\n"
             << "5. Delete from last\n"
             << "6. Delete from specific location\n"
             << "7. Search for an element\n"
             << "8. Display list\n"
             << "9. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: beginsert(); break;
            case 2: lastinsert(); break;
            case 3: randominsert(); break;
            case 4: begin_delete(); break;
            case 5: last_delete(); break;
            case 6: random_delete(); break;
            case 7: searchNode(); break;
            case 8: display(); break;
            case 9: exit(0);
            default: cout << "Please enter valid choice.\n";
        }
    }

    return 0;
}
void begininsert(){
    int item;
    node*ptr = new node();
    cout<<"enter value:";
    cin>>item;
    ptr->data=item;
    ptr->next=head;
    head=ptr;
    cout<<"node inserted at beginning\n";
}
void lastinsert(){
    int item;
    node*ptr = new node();
    cout<<"enter value:";
    cin>>item;
    ptr->data = item;
    ptr->next = nullptr;
    if (head == nullptr) {
        head = ptr;
    } else {
        node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next; 

            temp->

}
