#include<iostream>
using namespace std;

class Node{
    public:
        int data; 
        Node* next;
        //constructor
        Node(int d){
            data=d;
            next=NULL;
        }
        //destructor to free the memory
        ~Node(){
            int value = this->data;

            if(this->next != NULL){
                delete next;
                this->next = NULL;
            }
            cout<<"\n\t-Memory is free for node of data "<<value<<endl;
        }

};

//Inserting in Linked List
void insertatHead(Node* &head , int d){
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
void insertatn(Node* &tail,Node* &head,int n , int d){
    Node*temp = head ;
    int count = 1;
    if(n==1){
        insertatHead(head,d);
        return;
    }
    while(count<n-1){
        temp= temp->next;   
        count++;
    }
    
    Node*neu = new Node(d);
    neu->next = temp->next; // Pointing on same node
    temp->next = neu;     // Pointing to new node
}
void insertatTail(Node* &tail , int d){
    Node* temp= new Node(d);
    tail->next = temp;
    tail=temp;
}

//Deletion in Linked List
void deletion(int n ,Node* &head){
    if(n==1){
        Node * temp = head;
        head= head->next;
        temp->next = NULL;
        delete temp;
    }else{
        Node* curr= head; //Current Node pointer
        Node* prev=NULL;  //Previous Node pointer

        int count=1;
        while(count<n){
            prev=curr;
            curr = curr-> next;
            count++;
        }
        prev->next = curr ->next;
        curr->next = NULL;  //Error because prev pointer still pointing to curr node
        delete curr;
    }
}

//Traversing LInked list
void display(Node* n) {  
    Node* temp = n;
    cout<<"\nLink list : ";
    while(temp!=NULL){
        cout<<temp->data << "-> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main () 
{
    Node *node1 = new Node(12);
    // cout<<node1->data << endl;
    // cout<<node1->next << endl;

    //Head pointing to node1
    Node* head = node1 ;
    Node* tail = node1 ;

    insertatHead(head ,13);
    insertatHead(head ,14);
    display(head);

    insertatTail(tail ,11);
    insertatTail(tail ,10);
    display(head);

    insertatn(tail,head,3,5);
    display(head);
    insertatn(tail,head,1,101);
    display(head);
    insertatn(tail , head , 8 , 55);
    display(head);

    cout<<"Head : "<<head->data <<endl;
    cout<<"Tail : "<<tail->data <<endl;

    deletion(1 , head);
    display(head);
    deletion(5 , head);
    display(head);
    
    cout<<"Head : "<<head->data <<endl;
    cout<<"Tail : "<<tail->data <<endl;


    return 0;
}
