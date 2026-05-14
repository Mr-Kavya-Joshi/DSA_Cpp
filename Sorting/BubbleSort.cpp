//Bubble sort is the sorting algorithm that sorts the entire array by swapping the adjacent elements in the array, if required
#include <iostream>
using namespace std;
int main(){
  int arr[]={1,3,7,6,23,7,9,4,9};
  for(int i=0;i<9;i++){
    for(int j=0;j<9;j++){
      if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
      }
    }
  }
  for(int i=0;i<9;i++){
      cout<<arr[i]<<" ";
  }
  return 0;
}
