// C++ program for implementing Merge Sort
/*
#include<iostream.h>
#include<conio.h>
void mergesort(int [], int, int);
void merge(int [], int, int, int);

void main()
{
    int array[30],size,i;
    clrscr();
    cout<<"\nMerge Sort Implementation";
    cout<<"\nEnter no of elements: ";
    cin>>&size;
    cout<<"\nEnter "<< size <<" elements: ");
    for(i=0;i<size;i++)
    {
	     cin>>array[i];
    }

    merge(array,0,size-1);

    cout<<"\nSorted array is : ";
    for(i=0;i<size;i++)
    {
      cout<<array[i];
    }
    getch();
}


void merge(int array[],int start,int end)
{
    int mid;
    if(start < end)
    {
       mid=(start+end)/2;
       merge(array,start,mid);        //left recursion
       merge(array,mid+1,end);        //right recursion
       sort(array,start,mid,end);  //merging two sorted sub-arrays
    }
}


void sort(int array[],int start,int mid,int end)
{
    int temp[50],i,j,k;      // temperary array used for merging
    i=start;      //beginning of the first list
    j=mid+1;     //beginning of the second list
    k=0;

    while(i<=mid && j<=end)
    {
       if(array[i]<array[j])
	      temp[k++]=array[i++];
       else
	      temp[k++]=array[j++];
    }

    while(i<=mid)     //copy remaining elements of the first list
    {
       temp[k++]=array[i++];
    }
    while(j<=end)    //copy remaining elements of the second list
    {
       temp[k++]=array[j++];
    }

    //Transfer elements from temp[] back to array[]
    for(i=start,k=0;i<=end;i++,k++)
    {
       array[i]=temp[k];
    }
}

#include <iostream>
using namespace std;

// Merge two subarrays L and M into arr
void merge(int arr[], int p, int q, int r) {
  
  // Create L ← A[p..q] and M ← A[q+1..r]
  int n1 = q - p + 1;
  int n2 = r - q;

  int L[n1], M[n2];

  for (int i = 0; i < n1; i++)
    L[i] = arr[p + i];
  for (int j = 0; j < n2; j++)
    M[j] = arr[q + 1 + j];

  // Maintain current index of sub-arrays and main array
  int i, j, k;
  i = 0;
  j = 0;
  k = p;

  // Until we reach either end of either L or M, pick larger among
  // elements L and M and place them in the correct position at A[p..r]
  while (i < n1 && j < n2) {
    if (L[i] <= M[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = M[j];
      j++;
    }
    k++;
  }

  // When we run out of elements in either L or M,
  // pick up the remaining elements and put in A[p..r]
  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = M[j];
    j++;
    k++;
  }
}

// Divide the array into two subarrays, sort them and merge them
void mergeSort(int arr[], int l, int r) {
  if (l < r) {
    // m is the point where the array is divided into two subarrays
    int m = l + (r - l) / 2;

    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);

    // Merge the sorted subarrays
    merge(arr, l, m, r);
  }
}

// Print the array
void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;
}

// Driver program
int main() {
  int arr[] = {6, 5, 12, 10, 9, 1};
  int size = sizeof(arr) / sizeof(arr[0]);

  mergeSort(arr, 0, size - 1);

  cout << "Sorted array: \n";
  printArray(arr, size);
  return 0;
}
*/ 
//apna clg code it chas errors....giving wrong answers
#include <bits/stdc++.h>
using namespace std;

void conquer(int arr[],int s,int mid, int e){
  //int merge[] = new int[e - s + 1];
  int n = e-s+1;
  int *merge = new int[n];
  int idx1 = s;
  int idx2 = mid+1;
  int x=0;
  while(idx1 <= mid && idx2 <= e){
    if(arr[idx1] <= arr[idx2]){
      merge[x++] = arr[idx1++];
    }
    else{
      merge[x++] = arr[idx2++];
    }
  }
  while(idx1<=mid){
    merge[x++] = arr[idx1++];
  }
  while(idx2<=mid){
    merge[x++] = arr[idx2++];
  }
  int len = sizeof(merge)/sizeof(merge[0]);
  for(int i=0;i<len;i++){
    for(int j=s;j<len;j++){
      arr[j] = merge[i];
    }
  }
}

void divide(int arr[],int s,int e){
    if(s>=e){
      return;
    }
    int mid = s+(e-s)/2;
    divide(arr,s,mid);
    divide(arr,mid+1,e);
    conquer(arr,s,mid,e);
}

int main(){
  int arr[] = {6,3,9,5,2,8};
  int n = sizeof(arr)/sizeof(arr[0]);
  divide(arr,0,n-1);
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}