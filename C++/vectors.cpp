#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {1,2,3,4,5,6};
    arr.push_back(16); //function inserts element at end of the array
    cout<<arr.size()<<endl; //size of vector
    cout<<arr.capacity()<<endl; //capacity of a vector tells u whats the actual memory allocated
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";      // printing vectors
    }

    //fill instructor -- fills all elemnts with the same given element
    vector<int> arr[10,4];
}