#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int d){
        data = d;
        next = NULL;
    }
    void display(){
        cout<<data<<" ";
    }
};
class Queue{
    public:
    Node *front,*rear;
    Queue(){
        front = rear = NULL;
    }
    void enqueue(int d){
        Node *nn = new Node(d);
        if(rear == NULL){
            front = rear = nn;
        }
        rear->next = nn;
        rear = nn;
    }
    void dequeue(){
        if(front == NULL){
            cout<<"Dequeueing not possible"<<endl;
            return;
        }
        else{
            int res = front->data;
            front = front->next;
            cout<<res<<endl;
        }
    }
    void display(){
        Node *temp = front;
        if(temp == NULL){
            cout<<"it is an empty queue"<<endl;
        }
        else{
            while(temp!=NULL){
                temp->display();
                temp = temp->next;
            }
        }
    }
};

int main(){
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);
    q.display();
    q.dequeue();
   q.display();
}