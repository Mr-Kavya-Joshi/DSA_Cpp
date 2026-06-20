//Note that we have to write the cout command before calling the counting function for reverse counting
#include <iostream>
using namespace std;

void Counting(int n){
    if (n==0){
        return;
    }
    cout<<n<<" ";
    Counting(n-1);
}

int main() {
    int num;
    cout<<"ENTER THE NUMBER TILL WHERE YOU WANT TO PRINT"<<endl;
    cin>>num;
    Counting(num);
    return 0;
}
