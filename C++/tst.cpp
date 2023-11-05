/*#include<iostream>
using namespace std;
int main(void){
    const char *one = "test";
    cout<<one<<endl;
    const char *two = one;
    cout<<two<<endl;
    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
void leftrotate(string &s, int d){
    reverse(s.begin(), s.begin()+d);
    reverse(s.begin()+d, s.end());
    reverse(s.begin(), s.end());
}
void rightrotate(string &s, int d){
   leftrotate(s, s.length()-d);
}
int main(){
    int t,n,flag=1;
    cin>>t;
    while(t--){
        string ch;
        cin>>ch;
        cin>>n;
        if(flag==1){
            leftrotate(ch,n);
            cout<<ch<<endl;
            flag = 0;
        }
        else{
            rightrotate(ch,n);
            cout<<ch<<endl;
            flag = 1;
        }
    }
    return 0;
}