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


  void insertAtPostion(int val,int index){
    Node* newNode = new Node();
    newNode->data = val;

    if(head == NULL){
      push_Front(val);
      return;

    }
    Node* temp = head;
    for(int i=0;i<index-1;i++){
      temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;

  }


  void pop_Front(){
    Node* temp = head;
    if(head == NULL){
      cout<<"\n List is empty!";
      return;
    }
     head = temp->next;
     temp->next = NULL;
     delete temp;

  }
  void pop_back(){
    Node* temp = head;
    while(temp->next->next!=NULL){
      temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
  }
  
  void popAtindex(int index){
    Node* temp = head;
    if(index < 0){
      cout<<"\n Invalid Index!";
      return;
    }
    if(index == 0 ){
      pop_Front();
      return;
    }

    for(int i=0;i<index-1;i++){
      temp = temp->next;
    }
    Node* newTemp = temp->next->next;
    delete temp->next;
    temp->next = newTemp;
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
    insertAtPostion(10,2);
    print_List();
    // pop_Front();
    // pop_back();
    popAtindex(2);
    cout<<" \n new print\n";
    print_List();
    
    return 0;
}