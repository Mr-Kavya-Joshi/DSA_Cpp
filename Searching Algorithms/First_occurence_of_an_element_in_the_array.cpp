#include <iostream>
using namespace std;
int FirstOccurence(int arr[],int key,int size){
    int start=0;
    int end=size-1;
    int ans=-1;
    int mid=start+ (end-start)/2;
    while(start<=end){
        if (arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else if(arr[mid]>key){
            end = mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}


int main() {
    int givenArr[]={3,3,3,7,11,11,13,19,27};
    int size = sizeof(givenArr)/sizeof(givenArr[0]);
    int key;
    cout<<"enter the key : ";
    cin>>key;
    int value=FirstOccurence(givenArr,key,size);
    if (value==-1) cout<<"Sorry! it is not in the array";
    else cout<<"First occurence is"<<value;
    return 0;
}
