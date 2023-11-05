#include<iostream>
#include<algorithm>
//#include<bits>
using namespace std;
int largestele(int arr){
    int n=sizeof(arr)/sizeof(int);
    sort(arr,arr+n);
    int x=arr[n-1];
    return x;
}
int main(){
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<largestele(arr)<<endl;
}