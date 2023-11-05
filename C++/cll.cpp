#include<iostream>
using namespace std;
class Node{
    int data;
    Node *next;
    Node(int d){
        data = d;
    }
    void display(){
        cout<<data<<" _ ";
    }
};
class Cll{
    Node *hptr=NULL;
    int len=0;
    Node *new_n = new Node(d)
    void append(int d){
        if(hptr == NULL){
            hptr = new_n;
            new_n->next = hptr;
            }
        else{
            Node *temp = hptr;
            while(temp->next!=hptr){
                temp = temp->next;
            }
            temp->next = new_n;
            new_n->next = hptr;
        }
    }
    void display(){
        Node *temp = hptr;
        if(hptr == NULL){
            cout<<"list is empty"<<endl;
        }
        else{
            do{
                temp->display();
                temp = temp->next;
            } while (temp!=hptr);
        }
    }
    void insert(int pos,int val){
        
    }
};