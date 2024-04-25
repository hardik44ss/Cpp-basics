#include<iostream>
using namespace std;
#define n 20

class queue{
    public:
        int front, rear;
        int *arr;
        queue(){
            arr= new int[n];
            front = -1;
            rear = -1;
        }
        void push(int d){
            if( rear == n-1){
                cout<<"Queue overflow"<<endl;
                return ;
            }
            rear++;
            arr[rear] = d;

            if(front == -1){
                front++;
            }
        }
        void pop(){
            if(front == -1 || front > rear){
                cout<<"Queue underflow"<<endl;
                return ;
            }
            front++;
        }
        int peek(){
                if(front == -1 || front > rear){
                cout<<"Queue underflow"<<endl;
                return -1;
            }
            return arr[front];
        }
        bool empty(void) {
            if(front == -1 || front > rear){
                cout<<"Queue underflow"<<endl;
                return true;
            }
            else{
                return false;
            }
        }
};

int main () 
{
    queue q;
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(4);
    q.push(9);

    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;

    cout<<q.empty();
   

    

    return 0;
}
