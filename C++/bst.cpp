#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node *left,*right;
    Node(int data){
        this->data=data;
        left=right=NULL;
    }
    void display(){
        cout<<data<<" ";
    }
};
class BST{
public:
    Node *rptr;
    BST(){
        rptr=NULL;
    }
    Node* addNode(Node *rt,int d){
        if(rt==NULL){
            rt=new Node(d);
            return rt;
        }
        else if(d<rt->data){
            rt->left=addNode(rt->left,d);
        }
        else if(d>rt->data){
            rt->right=addNode(rt->right,d);
        }
    }
    void inorderdisplay(Node *rt){
        if(rt==NULL)
            return;
        inorderdisplay(rt->left);
        rt->display();
        inorderdisplay(rt->right);
    }
    void postorderdisplay(Node *rt){
        if(rt==NULL)
            return;
        postorderdisplay(rt->left);
        postorderdisplay(rt->right);
        rt->display();
    }
    void preorderdisplay(Node *rt){
        if(rt==NULL)
            return;
        rt->display();
        preorderdisplay(rt->left);
        preorderdisplay(rt->right);
    }
    int height(Node* rt){
        if(rt==NULL){
            return -1;
        }
        else{
            int lh=height(rt->left);
            int rh=height(rt->right);
            if(lh>rh)
                return lh+1;
            else
                return rh+1;
        }
    }
    Node *getParent(Node *rt, Node* ptr){
        if(rt==NULL)
            return NULL;
        if(rt->left==ptr or rt->right==ptr)
            return rt;
        else if (ptr->data<rt->data){
            return getParent(rt->left,ptr);
        }
        else{
            return getParent(rt->right,ptr);
        }
    }
    int secondMax(Node *rt){
        Node *temp = rt;
        while(rt->right!=NULL){
            rt = rt->right;
        }
        if(rt->left!=NULL){
            rt = rt->left;
            while(rt->right!=NULL){
                rt = rt->right;
            }
            return rt->data;
        }
        else{
            return getParent(temp,rt)->data;
        }
    }
    int secondMin(Node *rt){
        Node *temp = rt;
        while(rt->left!=NULL){
            rt = rt->left;
        }
        if(rt->right!=NULL){
            rt = rt->right;
            while(rt->left!=NULL){
                rt = rt->left;
            }
            return rt->data;
        }
        else{
            return getParent(temp,rt)->data;
        }
    }
};
int main(){
    BST b;
    b.rptr = b.addNode(b.rptr,4);
    b.addNode(b.rptr,1);
    b.addNode(b.rptr,9);
    b.addNode(b.rptr,3);
    b.addNode(b.rptr,2); 
    b.addNode(b.rptr,6);
    b.addNode(b.rptr,8);
    b.addNode(b.rptr,7);   
    b.inorderdisplay(b.rptr);
    cout<<endl;
    cout<<"Height of the tree is "<<b.height(b.rptr)<<endl;
    cout<<"Second largest element is "<<b.secondMax(b.rptr)<<endl;
    cout<<"Second smallest element is "<<b.secondMin(b.rptr)<<endl;
    return 0;
}