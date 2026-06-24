#include <iostream>
#include <cstring>
using namespace std;

int printLength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}

void Reverse(char word[],int n){
    int s = 0;
    int e = n-1;
    while(s<e){
        swap(word[s++],word[e--]);
    }
}

int main() {
    char word[]="malayalam";
    char origWord[30];
    strcpy(origWord,word);
    int n = printLength(word);
    Reverse(word,n);
    if(strcmp(word, origWord) == 0){
        cout<<"Yes it is a palindrome.";
    }
    else{
        cout<<"No it is not a palindrome.";
    }
    return 0;
}
