#include<iostream>
#include<stack>
using namespace std;
//use stack only for operators.consider given expression as string only if it is operator push it according 
//to higher precedence or equal precedence and operands r taken to output
class postfix_con{
    public:
    stack<char> st;
		string res;
    int prec(char c){
        if(c =='-' || c =='+'){
            return 1;
        }
        if(c =='*' || c =='/'){
            return 2;
        }
        else{
            return -1;
        }
    }
    bool ch(char c){
		    if(c>='a' and c<='z'){
		        return true;
		    }
		    else{
		        return false;
		    }
		}
    string infixtopost(string s){
        int i=0;
        while(s[i]!='\0'){
            if(ch(s[i])){
                res=res+i;
            }
            else{
                while(!st.empty() && prec(s[i])>=st.top()){
                    res=res+st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
            i++;
        }
        while(!st.empty()){
            res=res+st.top();
            st.pop();
        }
        return res;
};
int main() {
    postfix_con l;
    string exp ;
	cout<<"Enter expression"<<endl;
	cin>>exp;
	cout<<"Postfix form: "<<l.infixtopost(exp)<<endl;
	return 0;
}
//producing an output from postfix and get it evaluated. here operands are pushed into the stack and operators
//evalute and gives the final output. work with single digit numbers
#include<iostream>
#include<stack>
using namespace std;
class result{
    public:
    stack<char> st;
    int res;
    int 
}