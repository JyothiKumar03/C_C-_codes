// creating a linked list
#include<iostream>
using namespace std;

/*class Node{
    public:
    int data;
    Node *next;
    
    Node(int d){
        data=d;
        next = NULL;    // creating node with data and pointer
    }
    void display(){
        cout<<data<<"->";   //displaying the list
    }
};*/
/*class node{
    public:
    int coeff;
    int exp;
    node *next;
    node (int co,int ex){
        coeff=co;
        exp=ex;
    }
    void display(){
        cout<<coeff<<"X"<<exp<<" + ";
    }

};
class linkedlist{
    public:
        node *hptr = NULL; //initializing head pointer to null
    void append(int d,int e){
        if(hptr==NULL){     //checking if list is empty
            node *temp = new node(d,e);
            hptr = temp;            //assigning the value to the head of the list
        }
        else{
            node *temp = hptr;            //transversing from head till null is encountered
            while(temp -> next!= NULL){
                temp=temp->next;
            }
            node *nptr = new node(d,e);   //creating the new node and adding it to list
            temp -> next = nptr;
        }
    }
    void print(){
        node *temp = hptr;
        while(temp!=NULL){  //checking the node
            temp->display();    //displaying node and moving forward
            temp = temp->next;
            
        }
        cout<<"NULL"<<endl;
    }*/
   /* int sum(){                  //finding sum of the list
        int x=0;
        Node *temp = hptr;
        while(temp!=NULL){      //traversing and finding sum
            x=x+(temp->data);
            temp = temp->next;
        }
        return x;
    }
    int find(int q){
         Node *temp = hptr;            //finding element in list
         int flag=0;                
        while(temp!=NULL){
            if((temp->data)==q){        //traversing data till key is found
                return 1;
            }
            temp = temp->next;
        }
        }
        void del(int key_node){
        Node *temp=hptr;        //initializing head pointer
        Node *random;
        if(key_node==1){         //if required to delete 1st node
            //temp=hptr;
            for(int i=0;i<key_node;i++){
                temp=temp->next;        //moving all next nodes to previous node
            }
            hptr=temp;
        }
        else{                       //from 2nd node 
        for(int i=0;i<key_node;i++){     //traversing from starting to key
            random = temp->next;
            temp=temp->next;
        }
        Node *remove1=hptr;
        for(int i=0;i<key_node-2;i++){   //going till required node -1 and breaking link
            remove1=remove1->next;
        }
        remove1->next=random;       //linking last node to the list if required
        }
        Node*print1=hptr;           
        while(print1!=NULL){
            cout<<print1->data<<" -> ";
            print1=print1->next;
        }
        cout<<"NULL"<<endl;
    }
    }*/
    

    
};

int main(){
   linkedlist l1;
   int n,q,t;
   cout<<"give the lenght of list"<<endl;
   cin>>n;
   while(n--){
       cin>>t>>q;
       l1.append(t,q);
   }
   l1.dups(l1.hptr);
   l1.print(); 
   //cout<<l1.sum();
   /*cin>>q;
   if(l1.find(q)==1){
       cout<<q<<endl;
   }*/
   return 0;
}