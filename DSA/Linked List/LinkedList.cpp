#include"list.h"
// Main Function
int main()
{
    List ll;
    ll.putFront(3);
    ll.putFront(2);
    ll.putFront(1);
    ll.putBack(4);
    ll.putBack(5);
    ll.putBack(6);
    ll.insertNode(7,3);
    ll.deleteNode(5);
    ll.printList();
    cout<<ll.searchNode(4);
    return 0;
} 