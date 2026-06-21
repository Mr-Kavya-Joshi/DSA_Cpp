#include <iostream>
using namespace std;

bool isSorted(int *arr, int size){
    if(size==0||size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool rest = isSorted(arr+1,size-1);
        return rest;
    }
}

int main(){
    int array[] = {2,3,5,1,7,8};
    int size = sizeof(array)/sizeof(array[0]);
    bool ans = isSorted(array,size);
    (ans==true)?cout<<"Yes sorted !":cout<<"Not sorted.";
    return 0;
}
