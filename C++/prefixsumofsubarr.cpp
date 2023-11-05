#include<iostream>
using namespace std;
void kadane(int arr[],int n);
void largest_sum(int arr[],int n){  //this is another approach having O(n^2) time complexity
    int prefix[100] = {0};      //a new array is calculated having values of sum of given array
    prefix[0] = arr[0];         //instead of k for loop...its used making it efficient
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+arr[i];
    }
    int lc=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int cc=i>0 ? prefix[j]-prefix[i-1] :prefix[j];
            //cout<<"\n"<<"sum = "<<cc;
            lc=max(lc,cc);            
            //cout<<endl;
        }
    }cout<<"\n"<<"largest sum is "<<lc<<endl;
}
int main(){
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    largest_sum(arr,n);
    kadane(arr,n);
}

//kadane's algorithm foe calculating max sum of given array
void kadane(int arr[],int n){
    int cs=0; //current sum = 0
    int ms=0; // maximun sum till present = 0
    for(int i=0;i<n;i++){
        cs=cs+arr[i];
        if(cs<0){
            cs=0;
        }
        ms = max(ms,cs);
    }
    cout<<ms<<endl;
}
