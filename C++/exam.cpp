#include<iostream>
#include<stack>
using namespace std;
bool pal(string s){
    char ele;
    stack<char>st;
    int n =s.length();
    int mid = n/2;
    int i;
    for(i=0;i<mid;i++){
        st.push(s[i]);
    }
    if(n%2!=0){
        i++;
    }
    while(s[i]!='\0'){
        ele=st.top();
        st.pop();
        if(s[i]!=ele){
            return false;
        }
        i++;
    }
    return true;
}
int main(){
    string exp;
    cout<<"enter string -> ";
    cin>>exp;
    if(pal(exp)){
        cout<<"palindrome"<<endl;
    }
    else{
        cout<<"not a palindrome"<<endl;
    }
}