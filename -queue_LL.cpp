#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int d){
        data = d;
        next = NULL;
    }
};

class queue{
public:
    Node* front;
    Node* end;
    queue(){
        front= NULL;
        end= NULL;
    }

    void push(int x){
        Node* n = new Node(x);
        if(front == NULL ){
            front = n ;
            end = n;
            return;
        }
        end->next = n;
        end=n;
    }

    void pop(){
        if(front == NULL){
            cout<< " Underflow "<<endl;
            return ;
        }
        Node* todelete = front;
        front = front->next;
        delete todelete;
        // If queue becomes empty after deletion, update end pointer as well
        if(front == NULL){
            end = NULL;
        }
    }

    int peek(){
        if(front == NULL){
            cout<< " Underflow "<<endl;
            return -1 ;
        }
        return  front->data;
    }

    bool isEmpty(){
        if(front == NULL ){
            return true;
        }else{
            return false;
        }
    }
};

int main ()
{
    queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    cout<<q.peek() << endl;
    q.pop();
    cout<<q.peek() << endl;
    q.pop();
    cout<<q.peek() << endl;
    q.pop();
    cout<<q.peek() << endl;
    q.pop();

    // Trying to peek and pop from an empty queue
    cout<<q.peek() << endl;
    q.pop();

    return 0;
}
