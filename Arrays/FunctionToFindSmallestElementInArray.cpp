#include <iostream>
using namespace std;

void SmallestElem(int arr[], int n){
  int least=arr[0];
  for(int i=0;i<n;i++){
    if (arr[i]<least) least=arr[i];
  }
  cout<<least;
}

int main(){
    int newarr[]={3,6,85,23,5,2};
    int n =sizeof(newarr)/sizeof(newarr[0]);
    SmallestElem(newarr,n);
    return 0;
}
