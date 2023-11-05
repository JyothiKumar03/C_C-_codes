/*#include<iostream>
using namespace std;
int main(){
    char se;
    cin>>se;
        if(int(se)>=97 && int(se)<=122){
            cout<<"its lower";
        }
        else{
            cout<<"its upper";
        }
}*/
//write a program to check wheather entered year is a leap year
/*#include<iostream>
using namespace std;
int main(){
    int yr;
    cout<<"enter the year to check->";
    cin>>yr;
    if(yr%4==0 || (yr%100==0 && yr%400==0)){
        cout<<"its a leap yr";
    }
    else{
        cout<<"its a normal yr";
    }
}*/
//write c++ program to read a character from the keyboard and find whether the char entered is a vowel,a consonant
//or anything apart from these 2 using nested if-else
/*#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    if((ch>=65 && ch<90) || (ch>=96 && ch<122)){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
            cout<<"its a vowel"<<endl;
        }
        else{
            cout<<"its a consonant"<<endl;
        }
    }
    else{
        cout<<"its neither a vowel not a consonant"<<endl;
    }
}*/
//write a program to display the electricity bill generated using the following info
/*#include<iostream>
using namespace std;
int main(){
    int bill;
    cout<<"enter no of units->";
    cin>>bill;
    cout<<"the total bill is->";
    if(bill>=1 && bill<=100){
        cout<<bill*5;
    }
    else if(bill>=101 && bill<=200){
        cout<<500+(bill-100)*10;
    }
    else if(bill>=201 && bill<=300){
        cout<<1500+(bill-200)*15;
    }
    else {
        cout<<2300+(bill-300)*20;
    }
}*/
//write a program a class secured by student based on marks secured by him in 3 subjetcs
/*#include<iostream>
using namespace std;
int main(){
    int m,p,c;
    cin>>m>>p>>c;
    if((m+p+c/3)>90){
        cout<<"1st class";
    }
    else if((m+p+c/3)>75){
        cout<<"2nd class";
        
    }
    else if((m+p+c/3)>40){
        cout<<"border pass";
    }
    else{
        cout<<"fail";
    }
}
*/
//write a c++ program to find whether entered character is vowel using switch
/*#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"enter character";
    cin>>c;
    switch (c){
    case 'a': 
        cout<<"its a vowel"<<endl;
        break;
    case 'e': 
    cout<<"its a vowel"<<endl;
        break;    
    case 'i': 
    cout<<"its a vowel"<<endl;
        break;
    case 'o': 
    cout<<"its a vowel"<<endl;
        break;
    case 'u': 
    cout<<"its a vowel"<<endl;
        break;        
    default:
    cout<<"its not a vowel"<<endl;
        break;
    }
}*/
//basic arthimatic operations using switch on 2 variables
/*#include<iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cout<<"give 2 numbers:";
    cin>>a>>b;
    cout<<"give operation:";
    cin>>op;
    switch(op){
        case '+': cout<<a+b<<endl;
        break;
        case '-': cout<<a-b<<endl;
        break;
        case '*': cout<<a*b<<endl;
        break;
        case '/': cout<<a/b<<endl;
        break;
        case '%': cout<<a%b<<endl;
        break;
        default:
        cout<<"operator not defined"<<endl;
        break;

            }
}*/

/*#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<i<<" ";
        }cout<<endl;
    }
}
//swap 2 numbers using functions
#include<iostream>
using namespace std;
void swap(int a,int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"swapped numbers are ->"<<a<<" "<<b<<endl;
}
int main(){
    int x,y;
    cin>>x>>y;
    swap(x,y);
    cout<<x<<" "<<y;
    return 0;
}
//dynamically allocate memory
#include<iostream>
using namespace std;
int main(){
    int *p;
    p = new int(20);
    cout<<*p<<endl;
    delete(p);
    cout<<p;
}
Write a c++ program to read values in 1D array and display*/
/*#include<iostream>
using namespace std;
int main(){
    int *ptr;
    int n;
    cout<<"enter size of array";
    cin>>n;
    ptr = new int[n];
    for(int i=0;i<n;i++){
        cin>>ptr[i]; 
       // ptr = new int(arr[i]);
        //cout<<*ptr<<" ";
    }
    for(int i=0;i<n;i++){
        cout<<ptr[i]<<" ";
    }
}*/
//write a program to find sum of elements of array using dynamic memory allocation
/*#include <iostream>
using namespace std;
int main(){
    int *ptr;
    int n,c=0;
    cout<<"enter size of array - ";
    cin>>n;
    ptr = new int[n];
    for(int i=0;i<n;i++){
        cin>>ptr[i];
        c=c+ptr[i];
    }
    cout<<"the array is - ";
    for(int i=0;i<n;i++){
        cout<<ptr[i]<<" ";
    }
    cout<<"\nsum of elements -"<<c<<endl;
    return 0;
}*/
//write a program to read and print 2D array
/*#include <iostream>
using namespace std;
void read(int m,int n){
    int *p;
    p = new int[m*n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>p[i+j*n];
        }
    }
    cout<<"2D array is - "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<p[i+j*n]<<" ";
        }
        cout<<"\n";
    }
}
int main(){
    int *p;
    int m,n;
    cout<<"enter no of rows and coloumns - ";
    cin>>m>>n;
    read(m,n);
    return 0;
}*/
//write a program to perform basic arthmatic operations using concept of class and inline functions and display
/*#include <iostream>
using namespace std;
class op{
    public:
    inline void add(int x,int y){
            cout << x+y;
    }
    inline void sub(int x,int y){
            cout << x-y;
    }
    
    inline void mul(int x,int y){
            cout << x*y;
    }
    inline void div(int x,int y){
            cout << x/y;
    }
    inline void rem(int x,int y){
            cout << x%y;
    }
};
int main(){
    op x;
    int a,b;
    //char c;
    cout<<"enter numbers - ";
    cin>>a,b;
    x.add(a,b);
    return 0;
}
//write a program of 2 classes with one data member each and display the greatest using friend function
#include<iostream>
using namespace std;
class C2;
class C1{
    int d1 = 10;
    friend void max1(C1,C2);
};
class C2{
    int d2=20;
    friend void max1(C1,C2);
};
void max1(C1 x,C2 y){
   cout<< max(x.d1,y.d2);
}
int main(){
    C1 a;
    C2 b;
    max1(a,b);
    return 0;
}*/
//write a program to find avg of 3 subject marks using friends of classes
/*#include <iostream>
using namespace std;
class B;
class A{
    private:
    int m=10,p=20,c=30;
    friend class B;
};
class B{
    public:
    //cin>>z.m>>z.p>>z.c;
    void avg(A z){
        int x = (z.m+z.p+z.c)/3;
        cout<<x;
    }
};
int main(){
    A a;
    B b;
    b.avg(a);
}
//create a class demo with integer & character member,create 2 functions one which assigns the values to member var 
//using same and other func which displays the values
*/
/*
#include<iostream>
using namespace std;
class Data{
    public:
    int a;
    char ch;
    void f1(int a,char ch){
        this->a = a;
        this->ch = ch;
    }

    void dis(){
        cout<<a<<" "<<ch<<endl;
        cout<<this<<endl;
    }

};
int main(){
    Data d;
    d.f1(2,3);
    d.dis();
    cout<<&d<<endl;
    return 0;
}*/
//write a program to display value of 2 variables using default comstructor
/*#include<iostream>
using namespace std;
class Demo{
    public:
    int a,b;
    Demo(){
        a=100;
        b=200;
    }
    void print(){
        cout<<a<<" "<<b;
    }
};
int main(){
    Demo d;
    d.print();
}*/
/*
//write cpp to show concept of array of abjects with a min of 2 functions in a class
#include<iostream>
using namespace std;
class student{
public:
    int roll,math,phy;
    int chem,s;
    student(int a,int b, int c){
        //roll=r;
        math=a;
        phy=b;
        chem=c;
        //s=math+phy+chem;
    }student(int a,int b){
        cout << "1 op" << endl;
        //roll=r;
        math=a;
        phy=b;
        cin >> chem;
        //s=math+phy+chem;
    }student(int a){
        cout << "2 op" << endl;
        //roll=r;
        math = a;
        cin >> phy;
        cin >> chem;
        //s=math+phy+chem;
    }
    student(){
        cout << "zero op" << endl;
        cin >> math;
        cin >> phy;
        cin >> chem;
    }
    void avg(){
        cout<<"The MARKS is "<<math<<endl;
        cout<<"The MARKS is "<<phy<<endl;
        cout<<"The MARKS is "<<(chem)<<endl;
    }
    void res(){
        if (s>40){
            cout<<"the student has scored well"<<endl;
        }
        else{
            cout<<"Go & try again"<<endl;
        }
    }

};
int main(int argc, char* argv[]){
    // int n;
    // cout << "how many students" << endl;
    // cin >> n;
    student s0,s1(75),s2(90,87),s3(10,29,299);
    // s0.avg();
    // s1.avg();
    // s2.avg();
    // s3.avg();
    cout << argv[1] << endl;
    // for(int i=0;i<n;i++){
    //     cout << "ENter roll" << endl;
    //     cin >> d;
    //     cout <<"Enter m p c marks"<<endl;
    //     student st;
    //     cin >> a >> b >> c;
    //     //st.data(d,a,b,c);
    //     arr[i]=st;
    // }
    // cout << endl;
    // cout << "Averages" << endl;
    // for(int i=0;i<n;i++){
    //     arr[i].avg();
    // }
    // cout << endl;
    // cout << "results" << endl;
    // for(int i=0;i<n;i++){
    //     arr[i].res();
    // }
    return 0;
}*/
/*a constructor which takes paras is called parametrized constructor
it takes the following form 
*/
// write a cpp prog to display the area of a sq. using a
//parametrized constructor
/*#include<bits/stdc++.h>
using namespace std;
class sq{
    public:
    int s;
    sq(int x){
        s=x*x;
    }
    void dis(){
        cout<<"the area of square is "<<s<<endl;p
    }
};
int main(){
   // sq a;
    int q;
    cout<<"enter side of square"<<endl;
    cin>>q;
    sq a(q);
    a.dis();
    return 0;
}
//write a cpp program to explain 3 subject marks using concept of constructor overloading 
#include<iostream>
using namespace std;
class area{
public:
    area(int x){
        cout<<"The area of the sq. is "<<x*x<<endl;
    }
    area(int l,int b){
        cout<<"The area of rect. is "<<l*b<<endl;
    }

};
int main(){
    area a(10),b(10,20);
    cout<<"Thank you"<<endl;
}*/
//write a porgram assign values to the  2 variables using defsulf constructor
// and display using member function using dynamic array of objects
/*#include<iostream>
using namespace std;
class pro{
    int x,y;
    int a,b;
    public:
    pro(){
        x=10;
        y=20;
    }
    void display(){   
        x+=1;
        cout<<x*y<<endl;
    }
};
int main(){
    int n,i=0,j=0;
    //cout<<"give size ";
    //cin>>n;
    pro q;
    //q = new pro[n];
    q.display();
    for(int i=0;i<n;i++){
        q[i];
        cout<<"the values stored in "<<i<<" object are :";
        q[i].display();
    }
}*/
//
/*it is also called as generic functions. whenever er want to declare a single function which can perform jobs of all 
the functions with respect to different data types we go with the concept of function templates using the following syntax
template <class notes1{
private:
     data 
public:
    notes1( args );
    ~notes1();
};
notes1::notes1( args  ){}
notes1::~notes1(){}
write a cpp program to find the sum of integers to integers and 2 floates using function templates
*/
/*#include<iostream>
using namespace std;
template<class add>
class add{
    public:
    add sum(add a,add b){
        return a+b;
    }
};
int main(){
    add t;
    cout<<"give numbers ";
    cout<<t.sum(a,b);
    return 0;
}*/
//write a program to find the sum of elements of an array integer and float using function templates
/*#include<iostream>
using namespace std;
template <class t>
class x{
    public:
    //int arr[10];
    t sum(t arr[]);
    
};
template <class t>
t x<t> ::  sum(t arr[]){
        int c=0;
        for(int i=0;i<10;i++){
            c=c+arr[i];
        }
        return c;
    }
int main(){
    x<int> k;
    int arr[10];
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    cout<<"sum of the objects are -> ";
    cout<<k.sum(arr)<<endl;
    return 0;
}
whenever we want to use the same class for diff data type members we can go with the concept of class templates also called generic class
template<class d>
class demo{
    public:
    d a,b;
    .........
};*/
/*
#include<iostream>
using namespace std;
class node
{
    public:
    node *next;
    int data;
    node(int d)
    {
        data=d;
        next=NULL;
    }
    void display(){
        cout<<data<<endl;
    }
}; 
class cll
{
    public:
    node *head=nullptr;
    void add(int d)
    {
        node *nn=new node(d);
        if(head==nullptr)
        {
            head=nn;
            nn->next=head;
    void display()
    {
        node *temp=head;
        if(head==nullptr)
        {
            cout<<"empty"<<endl;
        }
        else
        
            do{
                temp->display();
                temp=temp->next;
            }while(temp!=head);
        }
    }
};
int main()
{
    cll o;
    o.add(1);
    o.add(2);
    o.add(3);
    o.add(4);
    o.display();   
}*/
/*when the derived class inherits the properties of more than one base class it is called as multiple inheritance.it takes the following form
class B1{                            class B2{                               class D : visibilityMode B1,visibilityMode B2{
    public:                                     public:                                        public:
        }                                               }                                      }
*/
//write a program to display the sum and avg of 3 syb marks of a student along with his details using multiple inheritance
/*#include<iostream>
using namespace std;
class details{
    public:
    string name;
    string roll;
    //int arr[3];
    details(){
    cin>>name>>roll;
        name = n;
        roll = r;
    }
};
class cal{
    public:
    int arr[3];
    int m,p,c;
    cal(){
    cin>>m>>p>>c;
    }
    int sum_marks = m+p+c;
    int avg_marks = (m+p+c)/3;
};
class dis : public details,public cal{
    public:
    dis(){
        cout<<"details of the student are ->"<<endl;
        cout<<"name -> "<<name<<endl;
        cout<<"roll no -> "<<roll<<endl;
        cout<<"marks -> "<<m<<" "<<p<<" "<<c<<endl;
        cout<<"sum of marks -> "<<sum_marks<<endl;
        cout<<"average of marks -> "<<avg_marks<<endl;
    }
};
int main(){
    details s;
    cal c;
    dis o;
    cout<<o<<endl;
    return 0;
}*/
//write a program to perform 4 basic arthimatic operations using multiple inheritance 
/*#include<iostream>
using namespace std;
class data{
    public:
    int a,b;
    data(){
        cout<<"enter 2 elements -> ";
        cin>>a>>b;
    }
};
class op{
    public:
    char c;
    op(){
        cout<<"give the operation to be performed"<<endl;
        cin>>c;
    }
};
class dis: public data,public op{
    public:
    dis(){
    switch (c){
    case '+':
        cout<<a+b;
        break;
    case '-':
        cout<<a-b;
        break;    
    case '*':
        cout<<a*b;
        break;
    case '/':
        cout<<a/b;
        break;    
    default:
        break;
    }
    }
};
int main(){
    dis x;
    return 0;
}*/
// MULTI LEVEL INHERITANCE - when properties and methords of a derived class r inherited by another class then it is called as multi level inheritance
/*#include<iostream>
using namespace std;
class animal{
    public:
    animal(){
        cout<<"iam an animal"<<endl;
    }
};
class dog: public animal{
    public:
    dog(){
        cout<<"iam a dog"<<endl;
    }
};
class puppy: public dog{
    public:
    puppy(){
        cout<<"iam a puppy"<<endl;
    }
};
int main(){
    puppy x;
    return 0;
}*/
//HYBRID INHERITANCE - the inheritance in which the derived class involves more than 1 form of inheritance then it is called as hybrid 
//inheritance or it is a combination of 2 or more types of inheritance
/*#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    void Ae(){
        cout<<"A: this is my secret"<<endl;
    }
};
class B : public A{
    public:
    void Ba(){
        cout<<"B: this is mine and A's secret"<<endl;
    }
};
class C:public A{
    public:
    void Ca(){
        cout<<"C: this is mine and A's secret"<<endl;
    }
};
class D:public B,public C{
    public:
    void Duf(){
        A a;
        B b;
        C c;
        cout<<a.Ae();
        cout<<b.Ba();
        cout<<c.Ca();
        cout<<"D: this is all our secret"<<endl;
    }
};
int main(){
    D x;
    x.Duf();
    return 0;
}
*/
//METHORD OVERRIDING : it is the redifinition of base class function in its derived class with same signature(same return type and parameters)
/*
#include<iostream>
using namespace std;
class A{
    public:
    int x=5;
    void dis(){
        cout<<"NO parameters in A class"<<endl;
        cout<<x<<endl;
    }
};
class B:public A{
    public:
    int y=10;
    void dis(){
        cout<<"NO parameters in B class"<<endl;
        cout<<y<<endl;
    }
};
int main(){
    B b;
    b.dis();
    return 0;
}
*/
//MEMBER FUNCTION : function declared at base class and redifne d at derived class. When u refer to a derived class obg, using a pointer 
//of base class then u can call a virtual function for that obj and execute the derived class version. Virtual functions ensure that 
//the correct function is called for an obj. Rules forworking with virtual function -->
// ->it can't be static ->pointer of base class ->prototype of virtual function should be the same in base and derived class
//->it should always be redifined in the child class
//PURE VIRTUAL FUNCTION:a function which is declared in the base class  without any code related to the base class an
//which is once again redifined inthe derived class is called as a pure virtual function.sometimes it is also refered 
//as do nothing function
//area of rectangle and triangle using concept of abstract base class
/*#include<iostream>
using namespace std;
class A{
    public:
    virtual void area(int l,int b) = 0;
    virtual void area(float b,float h) = 0;

};
class B:public A{
    public:
    void area(int l,int b){
        cout<<"area of rectangle is -> ";
        cout<<l*b<<endl;
    }
};
class C:public A{
    public:
    void area(float b,float h){
        cout<<"area of triangle is -> "<<0.5*(h*b)<<endl;
    }
};//it will throw error as the derived class becomes abstract class for which obj can't be created
int main(){
    B b;
    C c;
    b.area(10,20);
    c.area(15.5,20.5);
    return 0;
}*/
/*NOTE -> #a class is abstract if it  consisits of atleast 1 pure virtual function
# we can have pointers and references for abstract class type. # if we donot over ride the pure virtual function
then the derived class also becomes an abstract class
write a program to show the above concept*/
//write a program to show the concept of early and late binding.EARLY BINDING:in early bindibg the compiler 
//it is also known a sstatic or compile time binding
/*
#include<iostream>
using namespace std;
class A{
    public:
    void dis(){
        cout<<"vanakkam"<<endl;
    }
};
class B:public A{
    public:
    void dis(){
        cout<<"namaste"<<endl;
    }
};
int main(){
    B b;
    b.dis();
    return 0;
}*/
//write a program to count no of characters in given file and to wrok with even odd numbers in given file
/*#include<iostream>
using namespace std;
class data{
    public:
    int a,b;
    data(){
        cout<<"enter 2 elements -> ";
        cin>>a>>b;
    }
};
class op{
    public:
    char c;
    op(){
        cout<<"give the operation to be performed"<<endl;
        cin>>c;
    }
};
class dis: public data,public op{
    public:
    dis(){
    switch (c){
    case '+':
        cout<<a+b;
        break;
    case '-':
        cout<<a-b;
        break;    
    case '*':
        cout<<a*b;
        break;
    case '/':
        cout<<a/b;
        break;    
    default:
        break;
    }
    }
};
int main(){
    dis x;
    return 0;
}*/
//write a program to compare 2 objects 
/*#include<iostream>
using namespace std;
class A{
    public:
    int a;
    A(){
        cin>>a;
    }
    void operator>(A a2){//operator is a keyword here the next is an operator 
        if(a>a2.a){
            cout<<" is greater"<<endl;
        }
        else{
            cout<<" is lower"<<endl;
        }  
    }
};
int main(){
    A a1,a2;
    a1>a2;    
    return 0;

}*/
/*OPERATOR OVERLOADING: in c++ we can make operators to work for user defined classes.This means c++ has the ability
to provide the operators with special meaning for a data type.This ability is known as Operator overloading i.e., 
operator overloading gets a new meaning to an already existing operator withoout changing the actual meaning of it*/
//overload + symbol to concatinate 2 strings
/*#include<iostream>
#include<string.h>
using namespace std;
class A{
    public:
    string a;
    void get(){
        cin>>a;
    }
    string operator+(A t2){//operator is a keyword here the next is an operator 
        string s1=strcpy(s1,a);
        string s2=strcpy(s2,t2.a);
        return strcat(s1,s2);
    }
};
int main(){
    A a1,a2,a3;
    a1.get();
    a2.get();
    cout<<a1+a2;
    return 0;
}*/
//to overload + symbol inorder to add 2 complex objects
/*#include<iostream>
using namespace std;
class A{
    public:
    int a,b;
    void get(){
        cin>>a>>b;
    }
    A operator+(A c){
        a = a+c.a;
        b = b+c.b;
        return *this;
    }
};
int main(){
    A a1,a2,a3;
    a1.get();
    a2.get();
    a3=a1+a2;
    cout<<a3.a<<"+ i"<<a3.b;
    return 0;
}*/
//overload a unary operator incrementing the value of variable by 5
/*#include<iostream>
using namespace std;
class A{
    public:
    int a,b;
    void get(){
        cin>>a;
    }
    int operator++(){
        a=a+5;
        return a;
    }
};
int main(){
    A a1;
    a1.get();
    cout<<++a1;  
    return 0;
}*/
/*FILE - file is collection of data and it is used for storing data permanently in storing device.inorder to work
//with file we have to work with the standard cpp library <fstream> which provides 3 classes for working with files
//1-> ofstream: for creating files and writing data 2->ifstream:used when information is read from file 
//3->fstream: its the combination of both the classes above
A file must be opened before u read or write information from thr file
write a porgram to enter some data into a file
*/
/*#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream myfile;
    myfile.open("sample.txt");
    myfile<<"im on earth";
    myfile.close();
}*/
//write a program to enter ur name and roll no into a file and display the same form the file
// #include<iostream>
// #include<fstream>
// using namespace std;
// int main(){
//     ofstream myfile;
//     myfile.open("sample.txt");
//     myfile<<"Name - Jyothi kumar\n Roll no - 20BD1A050L";
//     myfile.close();
// }
// An exception is a problem arises during the code or any porblem behaviour. exception is a task to maintain the normal flow of program it doesnot 
// mean reparing an exception. Advantages of using exceptional handling - helps a porgrammer,develops a reliable system
//it leads to meaningful error reporting , maintains the normal flow of programs etc. We use 3 keywords ->try,throw,catch
// try -> it is a block of code which might get an exception.it is usually followed by one or more catch blocks
// throw -> a porgram throws an exception when a problem occurs
// catch ->it catches the exception thrown from the try block and can have the code to handle the exception
// write a cpp program to find the result of result of dividing 2 numbers using exceptional handling 
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int a,b,res=0;
//     cout<<"enter 2 numbers to divide ->";
//     cin>>a>>b;
//     try{
//         if(b==0)
//             throw b;
//         res = a/b;
//         cout<<res;
//     }
//     catch(int b){
//         cout<<"zero division exception occured,please check your 2nd integer "<<b<<endl;
//     }
//     return 0;
// }
// write a cpp to  find sum of 2 numbers and throw an exception if anynone of these r negeative
#include <bits/stdc++.h>
using namespace std;

void add(int a,int b) throw(int){
        if(a<0 && b<0)
            throw(a);
        int c = a+b;
        cout<<c;
}
int main(){
    int a,b;
    
    cout<<"enter input"<<endl;
    cin>>a>>b;
    try{
    add(a,b);
    }
     catch(int e){
        cout<<"please enter positive numbers"<<a<<endl;
    }
    return 0;
}
//nested tries: one try inside another try
class A{
    public:
    int a;

}
class B:class A{
    public:
    char b;

}