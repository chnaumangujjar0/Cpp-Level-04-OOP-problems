#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
 Node* head = NULL;

  void push_Front(int val){
    Node* newNode = new Node();
    newNode->data = val;
   
      newNode->next = head;
      head = newNode;
  }
  void push_back(int val){
    Node* newNode = new Node();
    newNode->data = val;
    newNode->next = NULL;
    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp->next!=NULL){
      temp = temp->next;
    }

    temp->next = newNode;
  }
  void print_List(){
    Node* temp = head;
    while(temp != NULL){
      cout<<temp->data<<"->";
      temp = temp->next;
    }
    cout<<"NULL"<<endl;
  }
 
int main() {
    push_Front(3);
    push_Front(2);
    push_Front(1);
    print_List();

    push_back(4);
    push_back(5);
    print_List();

    return 0;
}