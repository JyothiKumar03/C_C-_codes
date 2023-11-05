// C++ program for implementing Quick sort
/*
#include<iostream.h>
#include<conio.h>

void quicksort(int [10],int,int);

void main()
{
  int array[20],size,i;
  clrscr();
  cout<<"\nEnter the no of elements: ";
  cin>>size;

  cout<<"\nEnter "<< size<<" elements: ";
  for(i=0;i<size;i++)
  {
    cin>>array[i];
  }

  quicksort(array,0,size-1);

  cout<<"\nSorted elements are: ";
  for(i=0;i<size;i++)
  {
    cout<<array[i];
  }
  getch();

}

void quicksort(int array[10],int first,int last)
{
   int pivot,temp,i,j;

   if(first < last)
   {
      pivot=first;
      i=first;
      j=last;

      while(i<j)
      {
	       while(array[i]<=array[pivot] && i<last)
	           i++;
	       while(array[j]>array[pivot])
	           j--;
	       if(i<j)
	       {
	          temp=array[i];
	           array[i]=array[j];
	            array[j]=temp;
	       }
      }
      temp=array[pivot];
      array[pivot]=array[j];
      array[j]=temp;
      quicksort(array,first,j-1);
      quicksort(array,j+1,last);
   }
}
 porgramiz code for quick sort*/
 /*
#include <iostream>
using namespace std;

// function to swap elements
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

// function to print the array
void printArray(int array[], int size) {
  int i;
  for (i = 0; i < size; i++)
    cout << array[i] << " ";
  cout << endl;
}

// function to rearrange array (find the partition point)
int partition(int array[], int low, int high) {
    
  // select the rightmost element as pivot
  int pivot = array[high];
  
  // pointer for greater element
  int i = (low - 1);

  // traverse each element of the array
  // compare them with the pivot
  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
        
      // if element smaller than pivot is found
      // swap it with the greater element pointed by i
      i++;
      
      // swap element at i with element at j
      swap(&array[i], &array[j]);
    }
  }
  
  // swap pivot with the greater element at i
  swap(&array[i + 1], &array[high]);
  
  // return the partition point
  return (i + 1);
}

void quickSort(int array[], int low, int high) {
  if (low < high) {
      
    // find the pivot element such that
    // elements smaller than pivot are on left of pivot
    // elements greater than pivot are on righ of pivot
    int pi = partition(array, low, high);

    // recursive call on the left of pivot
    quickSort(array, low, pi - 1);

    // recursive call on the right of pivot
    quickSort(array, pi + 1, high);
  }
}

// Driver code
int main() {
  int data[] = {8, 7, 6, 1, 0, 9, 2};
  int n = sizeof(data) / sizeof(data[0]);
  
  cout << "Unsorted Array: \n";
  printArray(data, n);
  
  // perform quicksort on data
  quickSort(data, 0, n - 1);
  
  cout << "Sorted array in ascending order: \n";
  printArray(data, n);
}*/
//apna clg 

#include <iostream>
using namespace std;

void swap(int *a,int *b){
  int t = *a;
  *a = *b;
  *b = t;
}

int partition(int arr[],int low, int high){
  int pivot = arr[high];
  int i = low-1;//tracking elements lower than pivot

  for(int j=low;j < high ;j++){
    if(arr[j]<pivot){
      i++;
      swap(&arr[i], &arr[j]);
    }
  }
  swap(&arr[i+1], &arr[high]);
  return i+1;
}

void quicksort(int arr[],int low,int high){
  if(low < high){
    int pi = partition(arr,low,high);
    quicksort(arr,low,pi-1);
    quicksort(arr,pi+1,high);
  }
}

int main(){
  int data[] = {6,3,9,5,2,8};;
  int n = sizeof(data) / sizeof(data[0]);
  quicksort(data,0,n-1);
  for(int i=0;i<n;i++){
    cout<<data[i]<<" ";
  }
}