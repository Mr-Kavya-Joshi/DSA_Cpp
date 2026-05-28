//Here just do last-first+1 to find the number of times the element occurs in the array
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

int LastOccurence(int arr[],int key,int size){
    int start=0;
    int end=size-1;
    int ans=-1;
    int mid=start+ (end-start)/2;
    while(start<=end){
        if (arr[mid]==key){
            ans=mid;
            start=mid+1;
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
    int value1=FirstOccurence(givenArr,key,size);
    int value2=LastOccurence(givenArr,key,size);
    int num=value2-value1+1;
    if (value1==-1) cout<<"Sorry! it is not in the array";
    else cout<<"It occurs "<<num<<" times.";
    return 0;
}
