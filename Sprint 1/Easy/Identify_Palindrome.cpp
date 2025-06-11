#include <iostream>
using namespace std;

//Function to identify palindrome:
bool isPalindrome(string s){
    if(s.length() == 0){
        cout<<"Empty string";
        return false;
    }
    bool isPalindrome = true;
    int start = 0;
    int size = s.size();
    int end = size-1;
    while(start<=end){
        if(s[start] != s[end]){
            isPalindrome = false;
            break; 
        }
        start++;
        end--;
    }
    return isPalindrome;
}

int main() {
    string str;
    cin>>str;
    if(isPalindrome(str)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    
    return 0;
}