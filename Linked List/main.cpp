#include <iostream>
#include "linkedlist.cpp"

using namespace std;

int main(){
    linkedlist<int> ll;

    ll.insert_start(3);
    ll.insert_start(2);
    ll.insert_start(1);
    ll.insert_start(0);


    ll.print();

/*

ll.~linkedlist();

    cout << "\n";
    ll.print();

*/
    
    return 0;
}