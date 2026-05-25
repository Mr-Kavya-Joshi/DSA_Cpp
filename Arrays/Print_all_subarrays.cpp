#include<iostream>
using namespace std;

int main(){
    int i,j,k;
    int array[]={1,2,3,4,5};
    int n=sizeof(array)/sizeof(array[0]);
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            for (k=i;k<=j;k++){
                cout<<array[k];
            }
            cout<<" ";
        }
    }
  return 0;
}
