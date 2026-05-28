//Please note that the binary search algorithm works only for monotonic arrays- either ascending or descending
#include <iostream>
using namespace std;
int binarysearch(int arr[],int key,int size){
    
    int start = 0;
    int end = size-1;
    int mid =(start+end)/2;
    
    //This is a very imp. condition
    // If start>end then we would be traversing in an opposite manner, ie of no use
    
    while(start<=end){
        
        if (arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        mid = (start+end)/2;
    }
    
    return -1;
} 

int main() {
    int givenArr[]={3,7,11,13,19,27};
    int size = sizeof(givenArr)/sizeof(givenArr[0]);
    int key;
    cout<<"enter the key : ";
    cin>>key;
    
    int ans = binarysearch(givenArr,key,size);
    if(ans==-1) cout<<"Sorry! Could not find the element.";
    else cout<<"The element is present at index : "<<ans;
    return 0;
}
