#include <iostream>
using namespace std;

int ExpCalc(int x, int n){
    if(n==1){
        return x;
    }
    else if(n==0){
        return 1;
    }
    
    //In a function, statements are executed top to bottom, so write the below line after the base cases
    int ans=ExpCalc(x,n/2);
    
    if(n%2==0){
        return ans*ans;
    }
    else{
        return x*ans*ans;
    }
}

int main() {
    int x,n;
    cout<<"Enter the base";
    cin>>x;
    cout<<"Enter the exponent";
    cin>>n;
    cout<<ExpCalc(x,n);
    return 0;
}
