#include <iostream>
using namespace std;

void Fib(int a, int b, int n){
  if(n==0){
    return;
  }
  cout<<a<<" ";
  Fib(b,a+b,n-1);
}

int main() {
    int n = 10;  // print first 10 Fibonacci numbers
    Fib(1, 1, n);
    return 0;
}
