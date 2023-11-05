/*stack using array
#include <iostream>
using namespace std;
int stack[100], n=100, top=-1;
void push(int val) {
   if(top>=n-1)
   cout<<"Stack Overflow"<<endl;
   else {
      top++;
      stack[top]=val;
}
void pop() {
   if(top<=-1)
   cout<<"Stack Underflow"<<endl;
   else {
      cout<<"The popped element is "<< stack[top] <<endl;
      top--;
   }
}
void display() {
   if(top>=0) {
      cout<<"Stack elements are:";
      for(int i=top; i>=0; i--)
      cout<<stack[i]<<" ";
      cout<<endl;
   } else
   cout<<"Stack is empty";
}
int main() {
   int ch, val;
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!=4);
   return 0;
}*/
//stack using linked list
/*#include <iostream>
using namespace std;
class Node{
   public:
   int data;
   Node *next;
   Node (int d){
      data = d;
      next = NULL;
   }
   void display(){
      cout<<data<<"\n"<<"|"<<endl;;
   }
};
class Stack{
   public:
   Node *top;
   int maxlen;
   int currlen;
   Stack(int n){
      top = NULL;
      maxlen = n;
      currlen = 0;
   }
   void push(int d){
         if(currlen == maxlen){
            cout<<"push not possible,stack is full"<<endl;
         }
         else{
            if(top == NULL){
               Node *nn = new Node(d);
               top = nn;
               //nn->next = top;
               currlen++;
            }
            else{
               Node *t = top;
               Node *nn = new Node(d);
               t = nn;
               t->next = top;
               top = t;
               currlen++;
            }
         }
   }
   void display(){
      Node *t = top;
      while(t!=NULL){
         t->display();
         t=t->next;
      }
      cout<<"NULL";
   }
   void pop(){
      if(currlen == 0){
         cout<<"stack is empty"<<endl;
      }
      else{
         cout<<"the element poped is -> "<<top->data<<endl;
         int t = top->data;
         top = top->next;
         currlen--;
      }
   }
};
int main(){
   int n;
   cout<<"enter len of stack"<<endl;
   cin>>n;
   Stack s(n);
   while(n--){
      int t;
      cin>>t;
      s.push(t);
   }
   s.display();
   int x;
   cout<<"enter element to pop - ";
   //cin>>x;
   s.pop();
   s.display();
   return 0;
}
neil sir program*/
/*class stack{
   public:
   int *arr;
   int top,clen,len;
   stack(int l){
      len=l;
      arr = new int[l];
      top = -1;
      clen=0;
   }
   void push(int v){
      if(clen==len){
         cout<<"stack overflow"<<endl;
      }
      else{
         arr[++top] = v;
      }
   }
};application using stack*/
//stack push pop seek empty
/*#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = nullptr;
    }
    void display()
    {
        cout << data << endl;
    }
};
class Stack
{
public:
    Node *top;
    int mx;
    int cl;
    Stack(int n)
    {
        top = nullptr;
        mx = n;
        cl = 0;
    }
    int push(int x)
    {
        if (cl == mx)
        {
            cout << "stack full" << endl;
            return -1;
        }
        else if (top == nullptr)
        {
            Node *temp = new Node(x);
            top = temp;
            cl++;
            return x;
        }
        else
        {
            Node *nn = new Node(x);
            nn->next = top;
            top = nn;
            cl++;
            return x;
        }
    }
    int pop()
    {
        if (cl == 0)
        {
            cout << "empty";
            return -1;
        }
        else
        {
            int t = top->data;
            top = top->next;
            cl--;
            return t;
        }
    }
    int seek(int x){
        Node*temp=top;
        int p=0;
        while(temp != nullptr){
            if(temp->data==x)
            p++;
            temp=temp->next;
        }
        if(p!=0)
        cout<<"found"<<endl;
        else
        cout<<"not found"<<endl;
    }
    void empty(){
        if(cl==0)
        cout<<"stack empty";
        else
        cout<<"not empty";
    }
    void size(){
        int c=0;
        int y=cl;
        while(y != 0){
            c=c+1;
            y--;
        }
        cout<<"the size is:"<<c<<endl;
    }
    void display(){
        Node*tp=top;
        while(tp != nullptr){
            cout<<tp->data<<" ";
            tp=tp->next;
        }
    }
   void sort(){
       Node*p=top;
       Node*ind=nullptr;
       while(p != 0){
           ind=p->next;
           while(ind != nullptr){
               if(p->data >ind->data)
               swap(p->data,ind->data);
               ind=ind->next;
           }
           p=p->next;
       }
   }
};
int main()
{

    Stack st(5);
    int n;
    n = st.push(4);
    n=st.push(7);
    n = st.push(6);
  //  st.pop();
    cout<<"original display"<<endl;
    st.display();
    cout<<"\n";
    st.sort();
    st.display();
   //st.size();
   //st.empty();
   return 0;
}

C++ program to check whether the given string is Palindrome using Stack 

Sample Test Case:

Enter a string
madam
Palindrome
Sample Test Case:
Enter a string
hyderabad
Not Palindrome


#include <iostream>
#include<stack>
using namespace std;

class Check_Palindrome{
	public:
	stack<char> st;
	string s;
		bool isPalindrome(string s){
		   int n=s.length();
		   if(n%2!=0){
		   for(int i=0;i<(n-1)/2;i++){
		           st.push(s[i]);
		   }
		   for(int i=(n/2)+1;i<n;i++){
		       
                if(s[i]!=st.top()){
	                    st.push(s[i]);
	                }
	                else{
	                    st.pop();
	                }
	            }
	            if(st.empty()){
		           return true;
		       }
		       else{
		           return false;
	                }
	       }
		   else{
		       for(int i=0;i<n;i++){
		       if(st.empty()){
		           st.push(s[i]);
		       }
		       else{
		                if(s[i]!=st.top()){
		                    st.push(s[i]);
		                }
		                else{
		                    st.pop();
		                }
		            }
		        }
		        if(st.empty()){
		           return true;
		       }
		       else{
		           return false;
		       }
		   }
	}
};
int main(){
	Check_Palindrome cpl;
	string str;
	cout<<"Enter a string"<<endl;
	cin>>str;
	if (cpl.isPalindrome(str)) {
		cout << "Palindrome";
	}
	else {
		cout << "Not Palindrome";
	}
	return 0;
}

*/
//#include<bits/stdc++.h>
/*#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
   int arr[]={1,3,2,1,4,5};
   int n=arr.size();
   vector<int> v;
   stack<int> s;
   for(int i=arr[n-1];i>=0;i--){
      if(s.empty()){
         s.push(arr[i]);
         v.pushback(-1);
      }
      else if(!s.empty() and arr[i]>s.top()){
         v.pushback(s.top());
      }
      else if(!s.empty() and arr[i]<=s.top()){
         while(!s.empty() and arr[i]>=s.top()){
            s.pop();
         }
         if(s.size()==0){
            v.pushback(-1);
         }
         else{
            v.pushback(s.top());
         }
      }
      s.push(arr[i]);
   }
   cout<<v<<endl;
}

*/
/*#include <iostream>
#include <bits/stdc++.h>
#include<stack>
using namespace std;
int prec(char c){
    switch(c){
        case '^':
        return 3;
        break;
        case '/':
            return 2;
            break;
        case '*':
            return 2;
            break;
        case '+':
            return 1;
            break;
        case '-':
            return 1;
            break;
        default:
            return -1;
            break;
    }
}
void inf(string str){
    
   stack<int>st;
   string res;
    for(int i=0;str[i]!='\0';i++){
if(str[i]>='0'&& str[i]<='9')
   res+=str[i];
else if(str[i]=='(')
   st.push('(');
else if(str[i]==')'){
    while(st.top()!='('){
        int p=st.top();
        res+=p;
        st.pop();
    }
    st.pop();
}
else{
    while(!st.empty() && prec(str[i])<=prec(st.top())){
        res+=st.top();
        st.pop();
    }
    st.push(str[i]);
}

    }
    while(!st.empty()){
        res+=st.top();
        st.pop();
    }
    cout<<res<<endl;
}
int main(){

    string str = "2+3*(4^1-9)^(5+6*7)-8";
    inf(str);
}
*/
#include<iostream>
#include<stack>
using namespace std;
int prec(char c){
   switch(c){
      case '^':
         return 3;
         break;
      case '/':
         return 2;
         break;
      case '*':
         return 2;
         break;
      case '+':
         return 1;
         break;   
      case '-':
         return 1;
         break;
      default:
         return -1;
         break; 
   }
}
void inf(string s){
   stack<int> st;
   string res;
   for(int i=0;s[i]!='\0';i++){
      if(s[i]>='0' && s[i]<='9'){
         res+=s[i];
      }
      else if(s[i]=='('){
         st.push('(');
      }
      else if(s[i]==')'){
         while(st.top()!='('){
            int p=st.top();
            res+=p;
            st.pop();
         }
         st.pop();
      }
      else{
         while(!st.empty() && prec(s[i])<prec(s[i+1])){
            res+=st.top();
            st.pop();
         }
         st.push(s[i]);
      }
   }
   while(!st.empty()){
      res+=st.top();
      st.pop();
   }
   cout<<res<<endl;
}

bool isop(char c){
   if(c=='+'||c=='-'||c=='*'||c=='/'){
      return true;
   }
   else{
      return false;
   }
}

/*int eval(string s){
   stack<int> st;
   string res;
   for(int i=0;s[i]!='\0';i++){
      if(!isop){
         st.push(s[i]);
      }
      else{
         int x=st.top();
         st.pop();
         int y=st.top();
         st.pop();
         switch(s[i]){
            case '+':
            res=x+y;
            break;
            case '-':
            res=x-y;
            break;
            case '*':
            res=x*y;
            break;
            case '/':
            res=x/y;
            break;
         }
         st.push(res);
      }
   }
   return st.top();
}*/
int main(){
   string s="2+3*(4^1-9)^(5+6*7)-8";
   inf(s);
   //cout<<endl;
   //string x = "23+4/1";
   //cout<<eval(s)<<endl;;
}