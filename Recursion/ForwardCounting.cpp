//Note that we have to write the cout command after calling the counting function for reverse counting
//For example - if num=20, it will call 19, 18, ... so on till 1 before printing the number 20, that is calling the previous occurs before printing the current number
#include <iostream>
using namespace std;

void Counting(int n){
    if (n==0){
        return;
    }
    Counting(n-1);
    cout<<n<<" ";
}

int main() {
    int num;
    cout<<"ENTER THE NUMBER TILL WHERE YOU WANT TO PRINT"<<endl;
    cin>>num;
    Counting(num);
    return 0;
}
