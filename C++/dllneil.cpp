//create a double linkedlist 
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node *prev;
    Node(int d){
        data =d;
        next = NULL;
        prev = NULL;
    }
    void display(){
        cout<<data<<" <-> ";
    }
};
class DLL{
    public:
    Node *hptr=NULL,*tptr = NULL;
    void append(int d){
        Node *nptr = new Node(d);
        if(hptr == NULL){
            hptr = tptr = nptr;
        }
        else{
            tptr->next = nptr;
            nptr->prev = tptr;
            tptr = nptr;
        }
    }
    void forward_print(){
        Node *temp = hptr;
        while(temp!=NULL){
            temp->display();
            temp=temp->next;
        }
    }
    void rev_print(){
        Node *temp = tptr;
        while(temp!=NULL){
            temp->display();
            temp=temp->prev;
        }
    }
    void del(int key){
        
        if(hptr->data == key){
            Node *temp = hptr;
            temp->next->prev = NULL;
            hptr =temp->next;
        }
        else if(tptr->data == key){
            Node *temp = tptr;
            temp->prev->next = NULL;
            tptr = temp->prev;
        }
        else{
            Node *temp = hptr;
            while(temp->next!=NULL){
            if(temp->next->data == key){
                temp->next = temp->next->next;
                temp->next->prev = temp;
                 return;
            }
            temp = temp->next;  
        }
        
            cout<<"element nahi hei re baba"<<endl;
        
        }
    }
    void insert(int pos,int val){
        Node *add = new Node(val);
        if(pos == 1){
            add->next = hptr;
            hptr->prev = add;
            hptr = add;
        }
        else{
            int c= 0;
            Node *t = hptr;
            while(c<pos-2){
                t=t->next;
                c++;
            }
            add->next = t->next;
            t->next = add;
            add->prev = t;
        }
    }    
};
int main(){
    DLL l;
    l.append(1);
    l.append(2);
    l.append(3);
    l.append(4);
    l.append(5);
    l.del(3);
    l.forward_print();
    cout<<endl;
    l.insert(3,10);
    l.forward_print();

}

