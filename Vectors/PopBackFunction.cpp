//Pop Back function is used to remove an element from the vector
//We do not need to tell the value to be popped, as pop back already means deleting the last elemet.
#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector <int> myvec = {1,2,3,4,5,6};
  myvec.pop_back();
  for(int i:myvec){
      cout<<i<<" ";
  }
  return 0;
}
