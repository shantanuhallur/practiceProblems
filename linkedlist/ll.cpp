#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

//constructor to assign value to data member of the node while creation.
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head,int d){
// used &head reference operator as we dont want an head's copy and make changes in that copy ...
// we want to make changes in original head itself;

    //new node for data;
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d){
     Node* temp = new Node(d);
     temp->next = NULL;
    // Node* temp2 = head;
    // while(temp2->next!=NULL){
    //     temp = temp->next;
    // } 
    // temp2->next = temp;
    tail->next = temp;
    tail = tail->next;
   // OR tail = temp;

    
}

void insertAtPosition(int pos , Node* &head , int d){


    if(pos==1){
        insertAtHead(head,d);
        return;
        //write return or use if-else your choice.
    }
// else{
    Node* temp = new Node(d);
    Node* temp2 = head;
    int count =1;
    while(count<pos-1){
    temp2 = temp2->next;
    count++;
    } 
    temp->next = temp2->next;
    temp2->next = temp;
//}
}

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next; 
    }
    cout<<endl;
}

int main()
{   
       //creating node object normally;
//     Node n1(98); 
//    cout<<n1.data<<endl;

    //creating an new node object in heap;
    Node* node1 = new Node(69);

    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;
    //pointing head to node1;
    Node* head = node1;
    Node* tail = node1;
    print(head);
    insertAtHead(head,12);
    print(head);
    insertAtHead(head,15);
    print(head);
    insertAtTail(tail,99);
    print(head);
    insertAtTail(tail,59);
    print(head);
    insertAtPosition(4,head, 22);
    print(head);
    return 0;
}