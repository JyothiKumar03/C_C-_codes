#include<bits/stdc++.h>
#include<iostream>
#include<stack>
using namespace std;
class pal{
    public:
    stack<char> st;
    char c;
    string s;
    void com(string s){
        int n=s.length()/2;
        for(int i=0;i<s.length()/2;i++){
            if(st.empty())
                st.push(s[i]);
            else{    
            if(s[i] != st.top()){
                    st.push(s[i]); 
            }
            else{
                st.pop();
            }      
            }
        }
        if(st.empty()){
            cout<<"its a palindrome"<<endl;
        }
        else{
            cout<<"its not a palindrome"<<endl;
        }
    }
};
int main(){
    pal p;
    string s;
    cout<<"enter the string"<<endl;
    cin>>s;
    p.com(s);
}