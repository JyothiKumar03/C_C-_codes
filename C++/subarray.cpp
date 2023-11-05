#include<iostream>
using namespace std;
void subarray(int arr[],int n){   //brute force approach to find max sum of sub arrays
    int lc=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int cc=0;
            for(int k=i;k<j;k++){
                cout<<arr[k]<<",";
                cc=cc+arr[k];
                
            }
            cout<<"\n"<<"sum = "<<cc;
            lc=max(lc,cc);            
            cout<<endl;
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
    subarray(arr,n);
}