#include<iostream>
using namespace std;
class Node{
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
};
class linkedlist{
    public:
        Node *hptr = NULL; //initializing head pointer to null
        int len=0;
    void append(int d){
        if(hptr==NULL){     //checking if list is empty
            Node *temp = new Node(d);
            hptr = temp;            //assigning the value to the head of the list
            len++;
        }
        else{
            Node *temp = hptr;            //transversing from head till null is encountered
            while(temp -> next!= NULL){
                temp=temp->next;
            }
            Node *nptr = new Node(d);   //creating the new node and adding it to list
            temp -> next = nptr;
            len++;
        }
    }
    void print(){
        Node *temp = hptr;
        while(temp!=NULL){  //checking the node
            temp->display();    //displaying node and moving forward
            temp = temp->next;
            
        }
        cout<<"NULL"<<endl;
    }
    void insert(int pos,int val){
        //Node *temp = hptr;
        if(pos==0){         //if required to insert at 0 pos
            Node *new_node = new  Node(val);
            new_node->next = hptr;
            hptr = new_node;
        }
        else if(pos>len-1){ //checking if its out of list
            cout<<"Insert nahi hota re...position correct wala dedo"<<endl;
        }
        else{           //inserting within the list
            Node *temp = hptr;
            int c=0;
            while(c<pos-1){
                temp=temp->next;
                c++;
            }
            
                Node *nptr = new Node(val);
                Node *p1 = temp->next;
                temp -> next = nptr;
                nptr ->next = p1;
        }
        len++;
    }
    void dele(int pos){
        //Node *curr;
        Node *temp = hptr;
        if(pos == 1){
            hptr = hptr->next;
            //len--;
        }
        
        else if(pos == len){
            for(int i = 0;i<pos-2;i++){
                //curr = temp->next;
                temp = temp->next;
            }
            temp->next = NULL;
            }//Node *rem = hptr;
        else{
                for(int i=0;i<pos-2;i++){
                temp = temp->next;
            }
            temp->next = temp->next->next;
        }    
        Node *curr = hptr;
         while(curr!=NULL){
             cout<<curr->data<<" -> ";
             curr = curr->next;
         } 
    }       
    void same(Node *h1,Node *h2){
        Node *p1 = h1;
        Node *p2 = h2;
        int c=0;
        while(p1!=NULL && p2!=NULL){
            if(p1->data==p2->data){
                 c++;
                 p1 = p1->next;
                p2 = p2->next;

            }
            else if(p1->data>p2->data){
                p2 = p2->next;
            }
            else{
            p1 = p1->next;
            }
        }
        cout<<c<<endl;
    }     
    void unsort_same(){

    }
    /*void reverse(Node *temp){
            if(temp->next==NULL){
                cout<<temp->data<<endl;
            }
            else{
                reverse(temp->next);
                cout<<temp->data<<" ";
            }
    }*/
    linkedlist dups(Node*temp){
        Node*p=temp;
        Node*q=temp->next;
        while(q!=NULL){
            if(p->data!=q->data){
                p=q;
                q=q->next;
            }
            else{
                p->next=q->next;
                delete q;
                q=p->next;
            }
        }
        return *this;
    }
    void check(Node*f){
        Node*p1=f;
        Node*p2=f;
        /*do{
            p1=p1->next;
            p2=p2->next;
            if(p2->next!=NULL){
                p2=p2->next;
            }
            else{
                p2=NULL;
            }
        }while(p1!=p2 and (p1&&p2));
        if(p1==p2){
            return 1;
        }
        else{
            return 0;
        }*/
        bool flag = false;
        while(p1!=NULL){
            p1=p1->next;
            if(p1!=NULL){
                p1=p1->next;
                p2=p2->next;
            }
            if(p1==p2){
                flag = true;
                break;
            }
        }
        if(flag){
            cout<<"loop found"<<endl;
        }
        else{
            cout<<"loop not found"<<endl;
        }
    }
};
int main(){
    linkedlist l,l1,l2;
    int n1,p,n2;
    cout<<"give the lenght of list 1"<<endl;
    cin>>n1;
    while(n1--){
        int t;
        cin>>t;
        l1.append(t);
    }
    l1.print();
    cin>>p;
    l1.dele(p);
    //l1.print();
    //cout<<l1.check(l1.hptr);

    //int n1,p,n2;
    /*
    cout<<"give the lenght of list 2"<<endl;
    cin>>n2;
    while(n2--){
        int x;
        cin>>x;
        l2.append(x);
    }
    l2.print();
    l.same(l1.hptr,l2.hptr);
   l1.hptr = l1.dups(l1.hptr);
    //cout<<"enter pos to delete";
    //cin>>p;
    //l1.dele(p);
   l1.print(); 
   return 0;*/
}


