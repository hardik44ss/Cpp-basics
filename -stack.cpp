#include<iostream>
using namespace std;

class Stack{
    public:
    int top, size;
    int* arr;

    Stack(int size){
        this->size = size;
        top = -1;
        arr = new int[size];        
    }

    void push(int elmt){
        if(size-top>1){
            top++; 
            arr[top]=elmt;
        }else{
            cout<<"Stack Overflow \n";
        }
    }

    void pop(){
        if(top>=0){
           top--;  
        }else{
            cout << "Stack is empty\n";  
        }    
    }

    int peek(){
        if(top>=0){
            return  arr[top] ; 
        }else{
            cout<<"Stack is Empty\n";
            return -1;
        }
    }

    bool isEmpty(){
        if(top == -1){
            return  true;
        }else{
            return false;
        }
    }
};

int main () 
{
    Stack st(4);
    st.push(11);
    st.push(22);
    st.push(33);
    st.push(44);
    st.push(50);

    cout<<"Top element : "<< st.peek()<<endl;

    st.pop();

    cout<<"Top element : "<< st.peek()<<endl;

    st.pop();
    st.pop();
    st.pop();

    cout<<"Top element : "<< st.peek()<<endl;


    return 0;
}
