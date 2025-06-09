#include <iostream>
using namespace std;

//Function to find out number that is appearing only once:
int getNumber(int arr[] , int size){
    int ans = 0;
    for(int index = 0 ; index < size ; index++){
        ans = ans^arr[index]; // only single appearance will remain
    }
    return ans;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int index = 0 ; index < n; index++)
        cin>>arr[index];
    cout<<getNumber(arr,n);
    return 0;
}