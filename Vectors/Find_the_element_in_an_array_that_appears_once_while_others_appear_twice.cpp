#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector <int> nums ={2,2,3,3,4};
  int ans=0;
  for(int x:nums){
    ans=ans^x;
  }
  cout<<ans;
  return 0;
}
