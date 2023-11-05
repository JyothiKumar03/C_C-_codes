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
        cout<<data<<" -> ";   //displaying the list
    }
};*/
class Node{
    public:
    int coeff;
    int exp;
    Node *next;
    
    Node(int c,int e){
        coeff=c;
        exp=e;
        next = NULL;    // creating node with data and pointer
    }
    void display(){
        if(next==NULL)
        cout<<coeff<<"X^"<<exp<<" -NULL";   //displaying the list
        else
         cout<<coeff<<"X^"<<exp<<" + ";
    }
};
class Linkedlist{
    public:
        Node *hptr = NULL; //initializing head pointer to null
    void append(int c,int e){
        if(hptr==NULL){     //checking if list is empty
            Node *temp = new Node(c,e);
            hptr = temp;            //assigning the value to the head of the list
        }
        else{
            Node *temp = hptr;            //traversing from head till null is encountered
            while(temp -> next!= NULL){
                temp=temp->next;
            }
            Node *nptr = new Node(c,e);   //creating the new node and adding it to list
            temp->next = nptr;
        }
    }
    /*void input(int n){
        Node *temp = hptr;
        cin>>n;
        while(temp!=NULL && n>0){
            cin>>temp->data;
            temp = temp->next;
            n--;
        }
    }*/
    void print(){
        Node *temp = hptr;
        while(temp!=NULL){  //checking the node
            temp->display();    //displaying node and moving forward
            temp = temp->next;
            
        }
        //cout<<"NULL"<<endl;
    }
    Linkedlist add(Linkedlist pl){
        Linkedlist pres;
        Node *t1,*t2;
        t1=hptr;    //pointing head of 1st polynomial
        t2=pl.hptr;  //pointing head of 2nd polynomial
        while(t1!=NULL && t2!=NULL){
            if(t1->exp == t2->exp){
                pres.append((t1->coeff + t2->coeff),t1->exp); //appending values to resultant poly
                t1=t1->next;
                t2=t2->next;
            }
            else if(t1->exp < t2->exp){
                pres.append(t2->coeff,t2->exp);
                t2=t2->next;
            }
            else if(t1->exp > t2->exp){
                pres.append(t1->coeff,t1->exp);
                t1=t1->next;
            }
            
        }
        if(t1!=NULL && t2==NULL){
           while(t1!=NULL){
                pres.append(t1->coeff,t1->exp);
                t1=t1->next;
           }
        }
        else if(t1==NULL && t2!=NULL){
            while(t2!=NULL){
                pres.append(t2->coeff,t2->exp);
                t2=t2->next;
           }
        }
        
        return pres;
        
    }
    /*int sum(){
        int x=0;
        Node *temp = hptr;      //initializing head pointer
        while(temp!=NULL){      //traversing and finding the sum
            x=x+(temp->data);
            temp = temp->next;
        }
        return x;
    }
    void find(int q){
         Node *temp = hptr;
         int flag=0;
        while(temp!=NULL){          //traversing till end node
            if((temp->data)==q){    //checking if data matches with key
                flag = 1;
            }
            temp = temp->next;
        }
            
            if(flag==1){
                cout<<"its there"<<endl;
            }
            else{
                cout<<"not there"<<endl;
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
    }*/
};
int main(){
   Linkedlist l1,l2,presult;  //creating an object Linked list
   int n,t,q,d,c,n1;
   cout<<"Give the length of polynomial1"<<endl;
   cin>>n;              //size of list
   while(n--){   
       cout<<"pass values->"<<endl;
       cin>>t>>q;                  //user input to the list
       l1.append(t,q);
   }
   l1.print();
   cout<<"\n"<<"give length of polynomial2"<<endl;
   cin>>n1;
   while(n1--){   
       cout<<"pass values->"<<endl;
       cin>>d>>c;                  //user input to the list
       l2.append(d,c);
   }
   l2.print();
   
   cout<<"\n"<<"sum of polynomials are ->"<<endl;
   presult = l2.add(l1);
   presult.print();
   
   /*cout<<"enter key to search: ";
   cin >> q;
   l1.find(q);
   cout<<"the sum is = "<<l1.sum()<<endl;
   cout<<"enter key_nodeto delete:"<<endl;
   cin>>d;
   l1.del(d);*/
   return 0;
}