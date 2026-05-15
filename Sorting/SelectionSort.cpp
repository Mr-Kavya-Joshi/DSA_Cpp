#include <iostream>
using namespace std;

void SelectionSort(int arr[], int n){
    for(int i=0;i<n;i++){
      int l=i;
      for(int j=i+1;j<n;j++){
          if (arr[j]<arr[l]){
              l=j;
      }
      swap(arr[i],arr[l]);
    }
  }
}

int main(){
    int newarr[]={3,6,85,23,5,2};
    int n =sizeof(newarr)/sizeof(newarr[0]);
    SelectionSort(newarr,n);
    for(int i=0;i<n;i++){
        cout<<newarr[i]<<" ";
    }
    return 0;
}
