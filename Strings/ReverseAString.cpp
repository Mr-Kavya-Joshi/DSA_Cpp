#include <iostream>
using namespace std;

int printLength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}

void Reverse(char word[],int n){
    for(int i=n-1;i>=0;i--){
        cout<<word[i];
    }
}

int main() {
    char word[]="Hello world!";
    int n = printLength(word);
    Reverse(word,n);
    return 0;
}
