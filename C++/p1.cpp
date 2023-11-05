#include <iostream>
using namespace std;
  
// Node class to represent
// a node of the linked list.
class Node{
    public:
    int data;
    Node *next;
    Node(int d){
        data=d;
        next=NULL;
    }
    void display(){
        cout<<data<<" ";
    }
};
     // Default constructor
     // Parameterised Constructor

// Linked list class to
// implement a linked list.
class Linkedlist{
    public:
    Node *hptr=NULL;
    void insertNode(int d){
    if (hptr == NULL) {
        Node *temp = new Node(d);
        hptr=temp;
    }
    else{
        Node *temp=hptr;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        Node *nptr=new Node(d);
        temp->next=nptr;
    }
    }
    // Function to insert anode at the end of the linked list.
//    void insertNode(int d);
    // Function to print the linked list.
    void printList();
     // Function to find max value element 
     void max();
};
// Default constructor
// Function to insert a new node.
//void Linkedlist::insertNode(int d){
    // Create the new Node.
    // Assign to head
    //Node *hptr = NULL;};
    // Traverse till end of list
        // Update temp
    //}
    // Insert at the last.
    //temp->next = newNode;
// Function to print the
// nodes of the linked list.
void Linkedlist::printList(){
    Node* temp = hptr;
    // Check for empty list.
    if (hptr == NULL) {
        cout << "List empty" << endl;
    }
    // Traverse the list.
    while (temp != NULL) {
        temp->display();
        temp=temp->next;
    }
}

// Function to find max value nodes of the linked list.
void Linkedlist::max(){
    Node* current = hptr;
         int max = hptr->data;
    // Traverse the list.
    while (current != NULL){
            if(max<current->data){
                max=current->data;
            }
            current = current->next;
    }
         cout << max;
}
// Driver Code
int main(){
    Linkedlist l1;
    int n,t;
    cout<<"Give n value  to create a list with n nodes: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter a value:"<<endl;
        cin>>t;
        l1.insertNode(t);
    }
    cout << "Elememts of the list are: "<<"\n";
    // Print the list
    l1.printList();
    // Find max value element
    cout<<endl;
    cout << "Maximum value : ";
    l1.max();
        
    cout << endl;
    return 0;
}