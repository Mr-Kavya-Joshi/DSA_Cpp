//Here we have used the boolean variable = false for identifying the abscence of key in the array, as otherwise it would have printed "not found" many times
#include<iostream>
using namespace std;
int main(){
  int key;
  bool found=0;
  cout<<"Enter the number you want to search";
  cin>>key;
  int arr[]={1,3,7,2,7,2,86,32};
  int n=sizeof(arr)/sizeof(arr[0]);
  for(int i=0;i<n;i++){
    if (arr[i]==key){
      found=1;
      cout << "Yes! it is present at index" << i<<"\n";
    }

  }
  if (found==0) cout << "Sorry! not found";
  return 0;
}
