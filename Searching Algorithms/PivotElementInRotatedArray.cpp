#include <iostream>
using namespace std;
int PivotElem(int arr[],int n){
  
  int s=0;
  int e = n-1;
    
  while(s<e){
    int mid = s + (e-s)/2;
    
    if(arr[mid]>=arr[0]){
      s=mid+1;
    }
      
    else{
      e=mid;
    }
  }
  return s;
}

int main(){
  int array[6]={9,11,13,0,6,8};
  int num = sizeof(array)/sizeof(array[0]);
  int ans = PivotElem(array,num);
  cout<<array[ans];
  return 0;
}
