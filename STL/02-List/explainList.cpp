#include <iostream>
using namespace std;

void explainList(){
    list<int> ls;
    ls.push_back(2); // {2}
    ls.emplace_back(4); // {2,4}
 
   ls.push_front(6); // {6,2,4}
    ls.emplace_front(8); // {8 , 6 , 2 , 4}

/* 
Rest all function are same :
   rebegin rend
   begin end
   clear insert 
   size swap 
etc.
*/
}

int main() {
    
    return 0;
}